//
// Created by Zeta on 2018/10/30.
//

#ifndef LINKLIST_LINKLISTNODE_H
#define LINKLIST_LINKLISTNODE_H
#include "stdio.h"
#include "stdlib.h"
#define OK 1;
#define ERROR 0;
typedef char ElemType;
typedef struct Node
/*定义单链表结点结构体类型*/
{
    ElemType data;
    struct Node * next;
} Node,*LinkList;
void InitList(LinkList *L);//声明单链表初始化函数
void CreateFormHead(LinkList L);//声明头插法建表函数
void CreateFormTail(LinkList L);//声明尾插法建表函数
void PrintLinkList(LinkList L);//声明打印单链表函数
Node * GetUsePN(LinkList L, int i);//声明按序号查表函数,并使用P->next判断
Node * GetUseP(LinkList L, int i);//声明按序号查表函数,并使用P判断
Node * LocateUsePN(LinkList L, ElemType key);//声明按值查表函数,并使用P->next判断
Node * LocateUseP(LinkList L, ElemType key);//声明按值查表函数,并使用P判断
int ListLength(LinkList L);//声明求表长函数
int InsList(LinkList L, int i, ElemType e);//声明插入表函数
int DelList(LinkList L, int i, ElemType *e);//声明单链表删除操作函数
LinkList MergeLinkList(LinkList LA, LinkList LB);//声明合并两个单链表函数

#endif //LINKLIST_LINKLISTNODE_H
