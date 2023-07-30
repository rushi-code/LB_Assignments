#include <stdio.h>

int WhiteSpace(char *str)
{
    static int iCount = 0;
    if (*str != '\0')
    {
        if (*str == ' ')
        {
            iCount++;
        }
        str++;
        WhiteSpace(str);
    }
    return iCount;
}

int main()
{
    char str[20];
    int iRet = 0;
    printf("Enter the string: ");
    scanf(" %[^'\n']s", str);

    iRet = WhiteSpace(str);
    printf("The number of white spaces in the string is: %d", iRet);
    return 0;
}
