//Accept N numbers from user and accept one another number as NO, return index of last occurence of that NO

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
   
    for(iCnt=iLength-1; iCnt>0; iCnt--)
    {
        if(Arr[iCnt]==iNo)
        {
            return iCnt;   
        }
    }
    return -1;
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

    iRet = LastOcc(p,iSize,iValue);
    if(iRet == -1)
    {
        printf("There is no such member\n");
    }
    else
    {
        printf("Last occurence of %d is %d",iValue,iRet);
    }

    free(p);

    return 0;

}