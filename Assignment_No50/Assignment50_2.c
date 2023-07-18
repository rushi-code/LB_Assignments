#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int FD = 0;
    char fName[30];

    printf("Enter the file name which you want to create\n");
    scanf("%s", fName);

    FD = creat(fName, 0777);
    if(FD == -1)
    {
        printf("Unable to create the file\n");
    }
    else
    {
        printf("File successfully created\n");
    }

    close(FD);
    return 0;
}