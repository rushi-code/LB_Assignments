#include<stdio.h>
#include<stdbool.h>
bool ChkApha(char ch)
{
    if((ch>='A')&& (ch<='Z')||(ch>='a')&&(ch<='z'))
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
        printf("It is character\n");
    }
    else
    {
        printf("It is not character\n");
    }

    return 0;
}