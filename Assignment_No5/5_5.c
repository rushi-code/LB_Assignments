#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for (iCnt =iNo; iCnt <=iNo*5; iCnt++ )
    {
        if((iCnt*5)%iNo==0)
        {
        printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number Whose First Five Multiples You Want\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    
    return 0;
}