/*
Accept character, if character is small display its corresponding capital and if  it is capital then display its corresponding small. In other cases dispaly as it is 
*/
#include <stdio.h>

void Display(char ch)
{
    if((ch>='A')&&(ch<='Z'))
    {
        ch = ch+32;
    }
    else if((ch>='a')&&(ch<='z'))
    {
        ch = ch - 32;
    }
    printf("%c",ch);
}

int main() 
{
    char cValue = '\0';
    printf("Enter The Character\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}
