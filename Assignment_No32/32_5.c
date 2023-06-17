//Write a program which display largest digits of all elements of singly linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int iData;
    struct Node* next;
}NODE,*PNODE,**PPNODE;

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d\t",Head->iData);
        Head = Head->next;
    }
}

int Count(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
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
    PNODE temp = *Head;
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
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }

}

void InsertAtPos(PPNODE Head, int No, int Pos)
{
    PNODE temp = *Head;
    PNODE newn = NULL;
    int iLength = 0;
    int iCnt = 0;
    iLength = Count(*Head);
    if(Pos==1)
    {
        InsertFirst(Head,No);
    }
    else if(Pos==iLength+1)
    {
        InsertLast(Head, No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->iData = No;
        newn->next = NULL;

        for(iCnt=1;iCnt<Pos-1;iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        *Head = newn;
    }

}

int Largest(PNODE Head)
{
    int iNo = Head->iData;
    int iMax = 0;
    int iDigit = 0;

    while(iNo!= 0)
    {
        iDigit = iNo%10;
        
        if(iDigit>iMax)
        {
            iMax= iDigit;
        }

        if(iMax == 9)
        {
            break;
        }

        iNo = iNo/10;
        
    }
    return iMax;
    
}
void DisplayLargest(PNODE Head)
{
    int iRet = 0;
    while(Head!= NULL)
    {
        iRet = Largest(Head);
        printf("%d\t",iRet);
        Head = Head->next;
    }
    
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertAtPos(&First,250,2);
    InsertAtPos(&First,532,3);
    InsertAtPos(&First,419,4);
    

    DisplayLargest(First);
    
    return 0;
}