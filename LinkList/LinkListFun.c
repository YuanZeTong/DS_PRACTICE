//
// Created by Zeta on 2018/10/30.
//
#include "LinkListNode.h"
void InitList(LinkList *L)
/*��ͷָ���ʼ��һ��������*/
{
    *L = (LinkList)malloc(sizeof(Node));
    (*L)->next = NULL;
}

void CreateFormHead(LinkList L)
/*ͷ�巨����������*/
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
/*β�巨��������*/
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
//��ӡ��������
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
/*����Ų������ʹ��p->next�ж�*/
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
/*����Ų������ʹ��p�ж�*/
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
/*��ֵ�������ʹ��p->next�ж�*/
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
//��ֵ���ұ�����ʹ��p�ж�
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
//��������
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
//������������
{
    Node *pre = L, *s;
    int j = 0;
    while(pre && j < i)
}
*/

