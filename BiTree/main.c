#include <stdio.h>
#include <stdlib.h>
#include "BiTreeNode.h"
int main()
{
    BiTree bt;
    InitiateBiT(&bt);
    printf("Please input characters for BiTNode.data:\n");
    CreateBiT(&bt);

    system("pause");

    printf("Preorder:");
    PreOrder(bt);
    printf("\n");

    system("pause");


    int total_num = GetNodeNum(bt);
    printf("The Number of BiTree is :%d\n",total_num);

    system("pause");

    int leaf_num = GetLeafNodeNum(bt);
    printf("The Number of leaf node is : %d\n",leaf_num);

    system("pause");
    return 0;
}
