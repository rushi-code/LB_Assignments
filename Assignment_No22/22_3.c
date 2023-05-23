//Count diff between freq of small and capital letters

#include<stdio.h>

int Diff(char *str)
{
    int iCntS = 0;
    int iCntC = 0;
    while(*str !='\0')
    { 
        if((*str>='a')&&(*str<='z'))
        {
         iCntS++;
        }
        else if((*str>='A')&&(*str<='Z'))
        {
            iCntC++;
        }
        str++;
    }
    return iCntS - iCntC;
    
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    iRet = Diff(Arr);

    printf("Diff between freq is %d\n",iRet);

    return 0;
}