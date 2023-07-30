#include <stdio.h>

int Small(char *str)
{
    static int iCount = 0;
    if (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
        Small(str);
    }
    return iCount;
}

int main()
{
    char str[20];
    int iRet = 0;
    printf("Enter the string: ");
    scanf(" %[^'\n']s", str);

    iRet = Small(str);
    printf("The number of small characters in the string is: %d", iRet);
    return 0;
}
