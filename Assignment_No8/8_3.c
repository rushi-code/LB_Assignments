//Write a program which accept number from user and return the count of digits in between 3 and 7

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo !=0)
    {
        iDigit = iNo %10;
        if((iDigit>3)&&(iDigit<7))
        {
            iCnt++;
        }
        iNo = iNo /10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Count(iValue);
    printf("%d\n",iRet);
    return 0;
}