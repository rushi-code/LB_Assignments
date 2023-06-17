///Write a program which display addition of digits of element from singly linear linked list.
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

int SumDigit(PNODE Head)
{
    int iNo = Head->iData;
    int iSum = 0;
    int iDigit = 0;
    
    while((iNo!= 0))
    {
        iDigit = iNo%10;
        iSum = iSum + iDigit;
        iNo = iNo/10;
    }
    return iSum;
    
}

void DisplaySum(PNODE Head)
{
    int iRet = 0;
    printf("The addition of digits of element is\n");
    while(Head!=NULL)
    {
        iRet = SumDigit(Head);
        printf("%d\t",iRet);
        Head = Head->next;
    }
    
    
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertAtPos(&First,110,1);
    InsertAtPos(&First,230,2);
    InsertAtPos(&First,20,3);
    InsertAtPos(&First,240,4);
    InsertAtPos(&First,640,5);

    DisplaySum(First);
    
    
    return 0;
}