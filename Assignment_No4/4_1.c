//Write a program which accept name from user and print that name

#include<stdio.h>

int main()
{
    char Name[30];
    printf("Enter Full Name \n");
    scanf("%[^\n]s",Name);

    printf("Your Name is %s",Name);
    return 0;
}

//Time Complexity O:(N)
//Where N is length of string