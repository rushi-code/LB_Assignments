//Write a program which accept number from user and print its table
#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iTable = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt<=10;iCnt ++)
    {
        iTable = iNo*iCnt;
        printf("%d\t",iTable);
    }

}
int main()
{
    int iValue = 0;
   
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Table(iValue);
    return 0;
}
//Time Complexity O(N)
//Where N is input(natural number)