//Write a program which accept number from user and print all odd numbers upto N
#include<stdio.h>
void OddDisplay(int iNo) 
{
    int iCnt = 0;
    for(iCnt=1; iCnt<iNo;iCnt++)
    {
        
        if((iCnt%2)!=0)
        {
           
            printf("%d\t",iCnt);
        }
        
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number Whose Odd numbers you want\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    
    return 0;
}

//Time Complexity O:(N)
//Where N is input (natural number)