//Accept N numbers from user and accept one another number as NO check whether NO is present or not

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
  printf("By cpmparing Arr[icnt] with given no\n");
    int iCnt = 0;
    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    if(Arr[iCnt]==iNo)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

// BOOL Check(int Arr[],int iLength,int iNo)
// {
//     printf("By using flag\n");
//     int iCnt = 0;
//     BOOL bFlag = FALSE;

//     for(iCnt = 0; iCnt<iLength; iCnt++)
//     {
//         if(Arr[iCnt]==iNo)
//         {
//             bFlag = TRUE;
//             break;
//         }
//     }
//     return bFlag;
// }

int main()
{
    int iSize = 0;
    int iCnt = 0;
    BOOL bRet = FALSE;
    int iValue = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the number\n");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt<iSize;iCnt++)
    {
        printf("Enter element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize,iValue);
    if(bRet == TRUE)
    {
        printf("%d is present\n",iValue);
    }
    else
    {
        printf("%d is not present\n",iValue);
    }

    return 0;

}