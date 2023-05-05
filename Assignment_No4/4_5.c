//Write a program which accepts total marks & obtained marks from user and calculate percentage

#include<stdio.h>

float Percentage(float fNo1, float fNo2)
{
    float fAns = 0.0f;
    if(fNo1 == 0.0f)
    {
        printf("marks should not be zero\n");
        return 0.0f;
    }
    
    fAns = (fNo2*100) /(fNo1);
    return fAns;
}
int main()
{
    float fValue1 = 0;
    float fValue2 = 0;
    

    float fRet = 0.0f;

    printf("Enter Total Markss\n");
    scanf("%f",&fValue1);

    printf("Enter Obtained Marks\n");
    scanf("%f",&fValue2);

    fRet = Percentage(fValue1, fValue2);
    printf("Total percentage is %0.2f",fRet);

    return 0;
}
//Time Complexity O:(N)
//Where N is input (Natural Number)