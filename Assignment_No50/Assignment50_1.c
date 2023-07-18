#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int FD = 0;
    char fName[30];

    printf("Enter the file name which you want to open\n");
    scanf("%s",fName);

    FD = open(fName, O_RDONLY);
    if(FD == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File successfully opened\n");
    }

    close(FD);
    return 0;
}