#include <stdio.h>

int Sum(int iNo)
{
    static int iSum = 0;
    if (iNo!=0)
    {
        iSum = iSum + iNo%10;
        Sum(iNo/10);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet =0;
    printf("Enter the number: ");
    scanf("%d", &iValue);

    iRet = Sum(iValue);
    printf("The Sum of digits is: %d", iRet);
    return 0;
}
