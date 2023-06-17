///Write a program which displays all elements which are perfect from singly linear linked list.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node
{
    int iData;
    struct Node* next;
}NODE,*PNODE,**PPNODE;

void Display(PNODE Head)
{
    while(Head!= NULL)
    {
        printf("%d\t",Head->iData);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;
    while(Head!=NULL)
    {
        iCnt ++;
        Head = Head->next;
    }
    return iCnt;
}

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->iData = No;
    newn->next = NULL;
    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}
void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->iData = No;
    newn->next = NULL;
    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void InsertAtPos(PPNODE Head,int No, int Pos)
{
    int iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = *Head;
    int iLength = 0;
    iLength = Count(*Head);

    if(Pos == 1)
    {
        InsertFirst(Head,No);
    }
    else if (Pos == iLength+1)
    {
        InsertLast(Head,No);
    }
    else
    {
        
        newn = (PNODE)malloc(sizeof(NODE));
        newn->iData = No;
        newn->next = NULL;

        for(iCnt = 1; iCnt<Pos-1;iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next =newn;
    }
}

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt<=(iNo/2);iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void DisplayPerfect(PNODE Head)
{
    printf("Perfect numbers in linked list are: ");
    while (Head != NULL)
    {
        if(CheckPerfect(Head->iData))
        {
            printf("%d\t",Head->iData);
        }
        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;
    InsertAtPos(&First,11,1);
    InsertAtPos(&First,28,2);
    InsertAtPos(&First,17,3);
    InsertAtPos(&First,41,4);
    InsertAtPos(&First,6,5);
    InsertAtPos(&First,89,6);

    DisplayPerfect(First);

    return 0;
}