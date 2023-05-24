//Accept Character and check whether it is small case or not
#include<stdio.h>
#include<stdbool.h>
bool ChkApha(char ch)
{
    if((ch>='a')&& (ch<='z'))
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
        printf("It is small character\n");
    }
    else
    {
        printf("It is not small character\n");
    }

    return 0;
}