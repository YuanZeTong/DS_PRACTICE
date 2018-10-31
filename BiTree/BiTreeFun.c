//
// Created by Zeta on 2018/10/30.
//

#include "BiTreeNode.h"
#include <stdlib.h >
void InitiateBiT(BiTree * BiT){
    //初始化二叉链表
    *BiT = NULL;
}//InitiateBiT end

void CreateBiT(BiTree *BiT){
    //用扩展先序序列创建二叉链表
    ElemType ch;
    ch = getchar();
    if(ch == '.')
        *BiT = NULL;
    else{
        *BiT = (BiTree)malloc(sizeof(BiTNode));
        (*BiT)->data = ch;
        CreateBiT(&((*BiT)->LChild));
        CreateBiT(&((*BiT)->RChild));
    }//else end
}//CreateBiT end

void PreOrder(BiTree root){
    //先序遍历二叉链表
    if(root != NULL)
    {
        printf("%c ",root->data);
        PreOrder(root->LChild);
        PreOrder(root->RChild);
    }//if end
}//PreOrder end

int GetNodeNum(BiTree root){
    //分治法统计结点数目
    int num;
    if(root == NULL)
        return 0;
    if(root != NULL)
    {
        num = GetNodeNum(root->LChild) + GetNodeNum(root->RChild) + 1;
    }//if end
    return num;
}//GetNodeNum end

int GetLeafNodeNum(BiTree root){
    //分治法统计叶子结点数目
    int num;
    if(root == NULL)
        return 0;
    else if((root->LChild == NULL) && (root->RChild == NULL))
        num = 1;
    else{
        num = GetLeafNodeNum(root->LChild) + GetLeafNodeNum(root->RChild);
    }//else end
    return num;
}//GetLeafNodeNum end

