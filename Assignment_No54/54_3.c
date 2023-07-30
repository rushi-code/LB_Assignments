#include <stdio.h>

int strlenX(char *str)
{
    static int iLength = 0;
    if (*str != '\0')
    {
        iLength++;
        str++;
        strlenX(str);
    }
    return iLength;
}

int main()
{
    char str[20];
    int iRet = 0;
    printf("Enter the string: ");
    scanf("%s", str);

    iRet = strlenX(str);
    printf("The length of the string is: %d", iRet);
    return 0;
}
