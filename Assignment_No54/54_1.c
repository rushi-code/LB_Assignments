#include <stdio.h>

void Display(int iNo)
{
    static int iCnt = 1;
    if (iCnt <= iNo)
    {
        iCnt++;
        Display(iNo);
        printf("%d\t*\t", --iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}