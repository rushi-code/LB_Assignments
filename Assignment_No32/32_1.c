//Write a program which reverse each element of singly linked list
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

void Reverse(PNODE Head)
{
    int iNo = Head->iData;
    int iRev = 0;
    int iDigit = 0;

    while(iNo!= 0)
    {
        iDigit = iNo%10;
        iRev = (iRev*10)+iDigit;
        
        iNo = iNo/10;
        
    }
    printf("%d\t",iRev);
    


}
void DisplayRev(PNODE Head)
{
    while(Head!= NULL)
    {
        Reverse(Head);
        Head = Head->next;
    }
    
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertAtPos(&First,28,2);
    InsertAtPos(&First,17,3);
    InsertAtPos(&First,41,4);
    InsertAtPos(&First,6,5);
    InsertAtPos(&First,89,6);

    DisplayRev(First);
    
    
    return 0;
}