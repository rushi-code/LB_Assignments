//Accept N numbers from user and check whether that number contains 11 in it or not

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    printf("By comparing Arr[iCnt] with 11\n");
    int iCnt = 0;

    for(iCnt = 0; iCnt<iLength ; iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            break;
        }
    }
    if(Arr[iCnt]==11)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


// BOOL Check(int Arr[], int iLength)
// {
//     printf("By using flag\n");
//     int iCnt = 0;
//     BOOL bFlag = FALSE;

//     for(iCnt = 0; iCnt<iLength ; iCnt++)
//     {
//         if(Arr[iCnt]==11)
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
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

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

    bRet = Check(p,iSize);

    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }

    return 0;

}