#include <stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    printf("ASCII table\n");
    for(iCnt = 0; iCnt<=255; iCnt++)
    {
        printf("%d\t%x\t%o\n",iCnt,iCnt,iCnt);
    }

}

int main() 
{
    DisplayASCII();
    return 0;
}
