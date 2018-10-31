//
// Created by Zeta on 2018/10/30.
//
#include "LinkListNode.h"
void InitList(LinkList *L)
/*用头指针初始化一个单链表*/
{
    *L = (LinkList)malloc(sizeof(Node));
    (*L)->next = NULL;
}

void CreateFormHead(LinkList L)
/*头插法创建单链表*/
{
    Node *s;
    char c;
    int flag = 1;
    while(flag)
    {
        c = getchar();
        if(c != '$')
        {
            s = (Node *)malloc(sizeof(Node));
            s->data = c;
            s->next = L->next;
            L->next = s;
        }
        else
            flag = 0;
    }
}

void CreateFormTail(LinkList L)
/*尾插法建单链表*/
{
    Node *s,*r;
    r = L;
    char c;
    int flag = 1;
    while(flag)
    {
        c = getchar();
        if(c != '$')
        {
            s = (Node *)malloc(sizeof(Node));
            s->data = c;
            r->next = s;
            r = s;
        }
        else
        {
            r->next = NULL;
            flag = 0;
        }
    }
}

void PrintLinkList(LinkList L)
//打印单链表函数
{
    Node * p = L->next;
    int i = 0;
    while(p != NULL)
    {
        i++;
        printf("%d:%c  ",i,(p->data));
        p = p->next;
    }
    printf("\n");
}
Node * GetUsePN(LinkList L, int i)
/*按序号查表函数，使用p->next判断*/
{
    int j = 0;
    Node *p = L;
    if(i == 0){
        printf("This node is head of LinkList.\n");
        return L;
    }
    if(i < 0){
        printf("This LinkList doesn't have node %d.\n",i);
        return NULL;
    }
    while((p->next != NULL) && (j < i))
    {
        p = p->next;
        j++;
    }
    if(i == j)
        return p;
    else{
        printf("This LinkList doesn't have node %d.\n",i);
        return NULL;
    }
}

Node * GetUseP(LinkList L, int i)
/*按序号查表函数，使用p判断*/
{
    int j = 1;
    Node *p = L->next;
    if(i == 0){
        printf("This node is head of LinkList.\n");
        return L;
    }
    if(i < 0){
        printf("This LinkList doesn't have node %d.\n",i);
        return NULL;
    }
    while((p != NULL) && (j < i))
    {
        p = p->next;
        j++;
    }
    if(i == j)
        return p;
    else{
        printf("This LinkList doesn't have node %d.\n",i);
        return NULL;
    }
}
Node * LocateUsePN(LinkList L, ElemType key)
/*按值查表函数，使用p->next判断*/
{
    Node *p = L;
    while((p->next != NULL) && (p->next->data != key))
    {
        p = p->next;
    }
    if((p->next == NULL) && (p->data != key))
    {
        printf("This LinkList doesn't contain %c\n",key);
        return NULL;
    }
    return p->next;
}
Node * LocateUseP(LinkList L, ElemType key)
//按值查找表函数，使用p判断
{
    Node * p = L->next;
    while(p && p->data != key)
    {
        p = p->next;
    }
    if(p == NULL)
    {
        printf("This LinkList doesn't contain %c\n",key);
        return NULL;
    }
    return p;
}
int ListLength(LinkList L)
//求单链表长度
{
    Node *p;
    p = L->next;
    int j = 0;
    while(p)
    {
        p = p->next;
        j++;
    }
    return j;
}
/*int InsList(LinkList L, int i, ElemType e)
//单链表插入操作
{
    Node *pre = L, *s;
    int j = 0;
    while(pre && j < i)
}
*/

