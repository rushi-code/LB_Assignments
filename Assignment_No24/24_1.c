//Check whether character is present in string or not
#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char *str, char cValue)
{
    while(*str!='\0')
    {
        if(*str==cValue)
        {
           break;
        }
        str++;
    }
    if(*str=='\0')
    {
        return false;

    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[20];
    char ch ='\0';
    bool bRet = false;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&ch);
 
    bRet = CheckChar(Arr,ch);

    if(bRet==true)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }
    return 0;
}