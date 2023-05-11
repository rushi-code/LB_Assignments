//Accept N numbers from user and accept Range, Display all elements from this range

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt = 0;
   
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]>iStart) &&(Arr[iCnt]<iEnd))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
   
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    
    int iNo1 = 0;
    int iNo2 = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the starting number\n");
    scanf("%d",&iNo1);

    printf("Enter the ending number\n");
    scanf("%d",&iNo2);

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

    Range(p,iSize,iNo1,iNo2);

    free(p);

    return 0;

}