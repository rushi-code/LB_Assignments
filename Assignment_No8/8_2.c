//Write a program which accept number from user and return the count of odd digits

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo !=0)
    {
        iDigit = iNo %10;
        if(iDigit%2 !=0)
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