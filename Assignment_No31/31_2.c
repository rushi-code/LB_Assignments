///Write a program which displays all elements which are prime from singly linear linked list.
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

bool ChkPrime(int No)
{
    int iCnt = 0;
    bool bFlag = true;

    for(iCnt = 2; iCnt<=(No/2);iCnt++)
    {
        if((No % iCnt)== 0)
        {
            bFlag = false;
            break;
        }
        return bFlag;
    }   
}

void DisplayPrime(PNODE Head)
{
    printf("Prime Numbers in the linked list are\n");
    while(Head!=NULL)
    {
        if(ChkPrime(Head->iData))
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
    InsertAtPos(&First,20,2);
    InsertAtPos(&First,17,3);
    InsertAtPos(&First,41,4);
    InsertAtPos(&First,22,5);
    InsertAtPos(&First,89,6);

    DisplayPrime(First);

    
    return 0;
}