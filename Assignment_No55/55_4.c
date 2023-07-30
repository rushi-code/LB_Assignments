#include <stdio.h>

int Min(int iNo)
{
    static int iMin = __INT_MAX__;
    int iDigit = 0;
    if (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit < iMin)
        {
            iMin = iDigit;
        }
        Min(iNo / 10);
    }
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number: ");
    scanf("%d", &iValue);

    iRet = Min(iValue);
    printf("The Maximum of digits is: %d", iRet);
    return 0;
}