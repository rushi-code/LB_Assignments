//Accept character from user and display its ASCII value in decimal, octal and hexadecimal format

#include <stdio.h>

void Display(char ch)
{
    printf("Decimal %d\n",ch);
    printf("Octal %o\n",ch);
    printf("Hexadecimal %X\n",ch);
}

int main() 
{
    char cValue = '\0';
    printf("Enter The Character\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}
