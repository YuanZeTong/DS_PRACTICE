#include "LinkListNode.h"


int main()
{
    //测试头插法建单链表
    LinkList L1;
    InitList(&L1);
    setbuf(stdout, 0);
    printf("Please input characters for one linklist(end of '$'):\n");
    CreateFormHead(L1);
    printf("Create it by inserting form head of the list\n");

    system("pause");

    printf("This linklist contains :");
    PrintLinkList(L1);
    printf("\n");

    system("pause");

    printf("Search for 4th node of this linklist:\nmethod1 is using condition of (p->next != NULL):");
    Node *testGetUsePN = GetUsePN(L1,4);
    printf("%c\n",testGetUsePN->data);
    printf("method2 is using condition of(p != NULL):");
    Node *testGetUseP = GetUseP(L1,4);
    printf("%c\n",testGetUseP->data);

    system("pause");

    printf("Search for 'a' node of this linklist:\nmethod1 is using condition of (p->next != NULL):");
    Node *testLocateUsePN = LocateUsePN(L1,'a');
    if(testLocateUsePN != NULL){
        printf("%c\n",testLocateUsePN->data);
    }

    printf("method2 is using condition of(p != NULL):");
    Node *testLocateUseP = LocateUseP(L1,'a');
    if(testLocateUseP != NULL){
        printf("%c\n",testLocateUseP->data);
    }

    system("pause");

    fflush(stdin);


    //测试尾插法建立单链表
    LinkList L2;
    InitList(&L2);
    printf("Please input characters for one linklist(end of '$'):\n");
    CreateFormTail(L2);
    printf("Create it by inserting form tail of the list\n");

    system("pause");

    printf("This linklist contains :");
    PrintLinkList(L2);
    printf("\n");

    system("pause");

    printf("Search for 4th node of this linklist:\nmethod1 is using condition of (p->next != NULL):");
    Node *test3 = GetUsePN(L2,4);
    if(test3 != NULL){
        printf("test3:%c\n",test3->data);
    }


    printf("method2 is using condition of(p != NULL):");
    Node *test4 = GetUseP(L2,4);
    if(test4 != NULL){
        printf("test4:%c\n",test4->data);
    }

    system("pause");

    printf("Search for 'a' node of this linklist:\nmethod1 is using condition of (p->next != NULL):");
    Node *testLocateUsePN3 = LocateUsePN(L2,'a');
    if(testLocateUsePN3 != NULL){
        printf("locatePN3->next:%c\n",testLocateUsePN3->next->data);
    }

    printf("method2 is using condition of(p != NULL):");
    Node *testLocateUseP4 = LocateUseP(L2,'a');
    if(testLocateUseP4 != NULL){
        printf("locateP4->next:%c\n",testLocateUseP4->next->data);
    }


    return 0;
}
