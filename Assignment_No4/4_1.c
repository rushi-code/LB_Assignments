#include<stdio.h>

int main()
{
    char Name[30];
    printf("Enter Full Name \n");
    scanf("%[^\n]s",Name);

    printf("Your Name is %s",Name);
    return 0;
}
