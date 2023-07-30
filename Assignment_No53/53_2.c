#include <stdio.h>
#include <stdlib.h>

void DisplayR(int iNo)
{
    static int iCnt= 1;
    if(iCnt <= iNo)
    {
        printf("%d \t", iCnt);
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d", &iValue);

    DisplayR(iValue);

    return 0;
}