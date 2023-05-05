//Write a program which accept three numbers and prints its multiplication
#include<stdio.h>
int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 0;
     if((iNo1==0)&&(iNo2==0)&& (iNo3==0))
     {
        iMult = 0;
     }
     else 
     {
        if(iNo1 == 0)
        {
            iNo1 = 1;
        }
        if(iNo2 == 0)
        {
            iNo2 = 1;
        }
        if(iNo3 == 0)
        {
            iNo3 = 1;
        }
     }
    iMult = iNo1 * iNo2 * iNo3;
    return iMult;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    int iRet = 0;

    printf("Enter three numbers\n");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);
    
    iRet = Multiply(iValue1,iValue2,iValue3);
    printf("Multiplication of three numbers is %d",iRet);
    return 0;
}
//Time Complexity O:(N)
//Where N is input (Natural Number)
