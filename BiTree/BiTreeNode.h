//
// Created by Zeta on 2018/10/30.
//

#ifndef BITREE_BITREENODE_H
#define BITREE_BITREENODE_H
#include <stdio.h>
typedef char ElemType;
typedef struct node{
    ElemType data;
    struct node *LChild;
    struct node *RChild;
}BiTNode, * BiTree;
void InitiateBiT(BiTree * BiT);//初始化二叉链表
void CreateBiT(BiTree *BiT);//用扩展先序序列创建二叉链表
void PreOrder(BiTree root);//先序遍历二叉链表
int GetNodeNum(BiTree root);//分治法统计结点数目
int GetLeafNodeNum(BiTree root);//分治法统计叶子结点数目

#endif //BITREE_BITREENODE_H
