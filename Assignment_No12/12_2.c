//Accept N number from user and return the smallest number

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];
    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int iSize =  0;
    int iRet = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter Number of elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory\n");
    }
    
    printf("Enter %d elements\n",iSize);
    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("Enter Element %d:\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Maximum(p,iSize);
    printf("Min number is %d\n",iRet);

    free(p);
    return 0;
}