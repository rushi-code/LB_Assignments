#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFERSIZE 1024

int Countletter(char fName[], char ch)
{
    int FD = 0;
    char Arr[BUFFERSIZE];
    int iCount = 0; 
    int iRet = 0;

    FD = open(fName, O_RDONLY);
    while(1)
    {
        iRet = read(FD, Arr, sizeof(Arr));
        if(iRet == 0)
        {
            break;
        }
        for(int iCnt=0; iCnt<iRet; iCnt++)
        {
            if(Arr[iCnt] == ch)
            {
                iCount++;
            }
        }
    }
    return iCount;
    close(FD);
}
int main()
{
    char fName[50];
    int iRet = 0;
    char ch = '\0';

    printf("Enter the file name which you want to open\n");
    scanf("%s", fName);
    fflush(stdin);
    printf("Enter the character whose frequency you want to check\n");
    scanf("%c", &ch);

    iRet = Countletter(fName,ch);
    printf("Frequency of letter %c is : %d\n",ch,iRet);

    return 0;
}