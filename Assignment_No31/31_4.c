///Write a program which returns second maximum element from singly linear linked list.
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

int SecondMax(PNODE Head)
{
    int iMax = 0;
    int iSecondMax = iMax;

    while(Head!= NULL)
    {
        if((Head->iData)>iSecondMax)
        {
            iSecondMax = Head->iData;

            if((Head->iData)>iMax)
            {
                iSecondMax = iMax;
                iMax = Head->iData;
            }
        }
        Head = Head->next;
    }
    return iSecondMax;
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertAtPos(&First,110,1);
    InsertAtPos(&First,230,2);
    InsertAtPos(&First,320,3);
    InsertAtPos(&First,240,4);

    iRet = SecondMax(First);
    printf("Second Maximum Number is %d\n",iRet);

    
    
    return 0;
}