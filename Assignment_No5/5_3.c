//Write a program which accept number from user and print its number line

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = -iNo; iCnt<0;iCnt++)
    {
        printf("%d\t",iCnt);
    }

    for(iCnt =0 ; iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number Whose Number Line You want\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
//Time Complexity O:(N)
//Where N is input (natural number)