#include<stdio.h>
float CalculateBill(int iAmount)
{
    float fFinalBill = 0.0f;
    if(iAmount<500)
    {
        fFinalBill = iAmount;
    }
    else if(iAmount<1500 && iAmount>500)
    {
        fFinalBill =(iAmount)- (iAmount*10)/100;
    }
    else if(iAmount>1500)
    {
        fFinalBill = (iAmount)-(iAmount*15)/100;
    }
    return fFinalBill;
}

int main()
{
    char cArr[15]="\0";
    int iBill = 0;
    float fBill = 0.0f;

    printf("Enter Name of Hotel\n");
    scanf("%s",&cArr);

    printf("*** Welcome to Hotel %s ***\n",cArr);
    printf("\nEnter the total bill amount of customer\n");
    scanf("%d",&iBill);

    fBill= CalculateBill(iBill);
    printf("Total bill after discount is %0.2f Rs",fBill);

    return 0;
}