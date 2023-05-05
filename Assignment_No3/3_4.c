//Write a program which accepts number from user and return summation of all its non factors

#include<stdio.h>
int  SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<=(iNo);iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            iSum = iSum +iCnt;
        }
    }
    return iSum;
}
int main()
{ 
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("Summation of non factors is %d",iRet);
    return 0;
}

//Time Complexity is O:(N)
//Where N is input (Natural Number)