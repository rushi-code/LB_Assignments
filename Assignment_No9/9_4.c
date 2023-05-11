//Accept N numbers from user and display all such elements which are divisible by 3 and 5
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0;
    for(int iCnt = 0; iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%3==0)&&(Arr[iCnt]%5==0))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0;
    int iCnt = 0;
    
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

    Display(p,iSize);
}