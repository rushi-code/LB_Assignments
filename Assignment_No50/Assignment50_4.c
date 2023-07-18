#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFERSIZE 1024
int main()
{
    int FD = 0;
    int iRet = 0;
    char fName[50];
    char Arr[BUFFERSIZE];
    int iCount =0;

    printf("Enter the file name which you want to open\n");
    scanf("%s",fName);

    FD = open(fName, O_RDWR);

    while (1)
    {
        iRet = read(FD,Arr,sizeof(Arr));
        if(iRet == 0)
        {
            break;
        }
        iCount = write(1,Arr,iRet);
    }
    printf("\n");
    printf("File Size: %d", iCount);
    close(FD);
    return 0;
}
