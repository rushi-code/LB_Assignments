//Accept N numbers from user and return difference between summation of even elements and summation of odd elements

#include<stdio.h>
#include<stdlib.h>
int Difference (int Arr[],int iLength)
{
    int iCnt = 0;
    int iSumE = 0;
    int iSumO = 0;

    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iSumE = iSumE + Arr[iCnt];
        }
        if(Arr[iCnt]%2!=0)
        {
            iSumO = iSumO + Arr[iCnt];
        }
    }
    return iSumE - iSumO;     
    
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("Memory allocated successfully\n");

    printf("Enter %d elements\n",iSize );

    for(iCnt = 0; iCnt<iSize;iCnt++)
    {
        printf("Enter Element:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Difference(p,iSize);
    printf("Difference is %d",iRet);

    free(p);
    return 0;
}