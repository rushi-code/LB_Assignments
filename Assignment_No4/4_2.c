//Write a program which accept number from user and check whether that number is greater than 100 or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo>=100)
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
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Please Enter Number\n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);
    if(bRet == TRUE)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }


    return 0;
}

//Time Complexity O:(N)
//Where N is input (Natural Number)