//Accept N numbers from user and accept one another number as NO , return frequency of No from it

#include<stdio.h>
#include<stdlib.h>

int Freq(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    int iCounter = 0;
    {
        for(iCnt = 0; iCnt<iLength ; iCnt++)
        {
            if((Arr[iCnt])==iNo)
            {
                iCounter++;
            }
        }
        return iCounter;
    }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
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

    iRet = Freq(p,iSize,iValue);
    printf("Freq of %d is %d\n",iValue,iRet);

    return 0;

}