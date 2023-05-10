//Write a program which accept number from user and display its digits in reverse

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    int iReverse = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    {
        iDigit = iNo %10;
        printf("%d\n",iDigit);
        iNo = iNo/10;
    }

}

int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);
    return 0;
}