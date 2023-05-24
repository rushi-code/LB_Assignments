//Accept Character and check whether it is capital or not
#include<stdio.h>
#include<stdbool.h>
bool ChkCap(char ch)
{
    if((ch>='A')&& (ch<='Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet =  false;

    printf("Enter Character:\n");
    scanf("%c",&cValue);

    bRet = ChkCap(cValue);

    if(bRet == true)
    {
        printf("It is capital character\n");
    }
    else
    {
        printf("It is not captial character\n");
    }

    return 0;
}