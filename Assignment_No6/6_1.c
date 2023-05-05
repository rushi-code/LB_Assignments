//Write a program which accept number if number<50 then print small, if number>=50 &number<100 then print medium , if number>100 print large

#include<stdio.h>
void Number(int iNo)
{
    
    if(iNo<50)
    {
        printf("Small\n");
    }
    if((iNo>=50)&&(iNo<100))
    {
        printf("Medium\n");
    }
    if(iNo>=100)
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Number(iValue);


    return 0;
}

//Time Complexity O(N)
//Where N is input(natural number)