//Write a program which accept number from user and return difference between summation of even digits and summation of odd digits

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iTemp = iNo;  // after travelling first loop iNo becomes zero due to which second loop cannot travel,so iTemp = iNo is used 
    int iESum = 0;
    int iOSum = 0;

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit%2 == 0)
        {
            iESum = iESum +iDigit;
        }
        iNo = iNo/10;
    }
    
    while(iTemp !=0)
    {
        iDigit = iTemp % 10;
        if(iDigit%2 != 0 )
        {
            iOSum = iOSum +iDigit;
        }
        iTemp = iTemp/10;
    }
    
     return (iESum-iOSum);

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("%d\n",iRet);
    return 0;
}