//Write a program which accept number from user and return multiplications of all digits

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    
    while(iNo !=0)
    {
        iDigit = iNo %10;
        if(iDigit==0)
        {
            iDigit = 1;
        }
        iMult = iMult * iDigit;
        iNo = iNo/10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("%d\n",iRet);
    return 0;
}