#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFERSIZE 1024

void DisplayN(char fName[], int iSize)
{
    int FD = 0;
    char Arr[BUFFERSIZE];
    int iCount = 0; 
    int iRet = 0;

    FD = open(fName, O_RDONLY);

    while(1)
    {
        iRet = read(FD, Arr, iSize);
        if(iRet == 0)
        {
            break;
        }
        write(1,Arr,iRet);
    }
    close(FD);
}
int main()
{
    char fName[50];
    int iRet = 0;
    int iSize = 0;

    printf("Enter the file name which you want to open\n");
    scanf("%s", fName);

    fflush(stdin);

    printf("Enter number of characters you want to read\n");
    scanf("%d" ,iSize);

    DisplayN(fName, iSize);

    return 0;
}
