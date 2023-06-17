///Write a program which returns smallest element from singly linear linked list.

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int Data;
    struct Node *Next;
};
typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void Display(PNODE Head)
{
  printf("Input Linked List\n");

  while(Head!=NULL)
  {
    printf("|%d| -> ",Head->Data);
    Head = Head->Next;
  }
  printf("NULL\n");
}

int Count (PNODE Head)
{
    int iCnt = 0;
    while(Head!=NULL)
    {
        iCnt++;
        Head =  Head->Next;
    }
    return iCnt;
}


void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = No;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head,int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = No;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp->Next != NULL)
        {
            temp = temp->Next;
        }
        temp->Next = newn;
    }
}

void InsertAtPos(PPNODE Head, int no, int ipos)
{
  int iLength = 0;
  int icnt = 0;
  PNODE temp = *Head;
  iLength = Count(*Head);  //calculate length of LL

  PNODE newn = NULL;

  //filter
  if((ipos<1)||(ipos>iLength+1)) //Invalid Position
  {
    printf("Invalid Position\n");
    return;
  }

    if(ipos==1)
    {
      InsertFirst(Head,no);
    }
    else if(ipos==iLength+1)
    {
      InsertLast(Head,no);
    }
    else
    {
      newn = (PNODE)malloc(sizeof(NODE)); 

      newn->Data = no;                    
      newn->Next = NULL;

      for(icnt = 1; icnt<ipos-1;icnt++)
      {
        temp = temp->Next;
      }
     
      newn->Next = temp ->Next;
      temp->Next = newn;

    }
}


int Minimum(PNODE Head)
{
    int iMin = Head->Data;
    int iCnt = 0;
    int iLength = Count(Head);

    for(iCnt = 1;iCnt<=iLength;iCnt++)
    {
        if((Head->Data)<iMin)
        {
            iMin = Head->Data;
        }
        Head = Head->Next;
    }
   
    return iMin;
}

int main()
{
    PNODE First = NULL;
    InsertAtPos(&First,110,1);
    InsertAtPos(&First,230,2);
    InsertAtPos(&First,20,3);
    InsertAtPos(&First,240,4);
    InsertAtPos(&First,640,5);

    Display(First);

    int iRet = Minimum(First);
    printf("Minimum number is %d\n",iRet);
    
    return 0;
}