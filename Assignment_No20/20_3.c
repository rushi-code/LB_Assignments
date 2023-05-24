//Accept Character and check whether it is digit or not
#include<stdio.h>
#include<stdbool.h>
bool ChkApha(char ch)
{
    if((ch>='0')&&(ch<='9'))
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

    bRet = ChkApha(cValue);

    if(bRet == true)
    {
        printf("It is digit\n");
    }
    else
    {
        printf("It is not digit\n");
    }

    return 0;
}