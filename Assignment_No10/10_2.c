//Accept N numbers from user and return difference between frequency of even number and odd number

#include<stdio.h>
#include<stdlib.h>

int Freq(int Arr[],int iLength)
{
    int iCnt = 0;
    int iCounterE = 0;
    int iCounterO = 0;
    for(iCnt =0; iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iCounterE++;
        }
    }

    for(iCnt =0; iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2)!=0)
        {
            iCounterO++;
        }
    }
    return(iCounterE-iCounterO);
    
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

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt<iSize;iCnt++)
    {
        printf("Enter element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Freq(p,iSize);
    printf("Difference between freq is %d\n",iRet);

    return 0;

}