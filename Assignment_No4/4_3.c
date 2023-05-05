//Write a program which accept two number from user and check whether that numbers are equal or not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()

{
    int iValue1 = 0;
    int iValue2 = 0;

    BOOL bRet = FALSE;

    printf("Enter Two Numbers\n");
    scanf("%d%d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }


    return 0;
}
//Time Complexity O:(N)
//Where N is input (Natural Number)