#include <stdio.h>

int Mult(int iNo)
{
    static int iProduct = 1;
    if (iNo!=0)
    {
        iProduct = iProduct *(iNo%10);
        Mult(iNo/10);
    }
    return iProduct;
}

int main()
{
    int iValue = 0;
    int iRet =0;
    printf("Enter the number: ");
    scanf("%d", &iValue);

    iRet = Mult(iValue);
    printf("The Sum of digits is: %d", iRet);
    return 0;
}