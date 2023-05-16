#include<stdio.h>
float IncomeTax(int iAmount)
{
   float fIncomeTax = 0.0f;
   if(iAmount<500000)
   {
    fIncomeTax = 0;
   }
   else if(iAmount>=500000 && iAmount<1000000)
   {
    fIncomeTax = ((iAmount-500000)*10)/100;
   }
   else if(iAmount>=1000000 && iAmount<2000000)
   {
    fIncomeTax = 50000+((iAmount-1000000)*20)/100;
   }
   else if(iAmount>=2000000)
   {
    fIncomeTax = 50000 + 200000 + ((iAmount-2000000)*30)/100;
   }
   return fIncomeTax;
   

}

int main()
{
    char cArr[15]="\0";
    int iIncome = 0;
    float fTax = 0.0f;

    printf("Enter Your First Name\n");
    scanf("%s",&cArr);

    printf("*** Welcome %s to Income Tax Portal ***\n",cArr);
    printf("\nHello %s Enter Your Annual Income\n",cArr);
    scanf("%d",&iIncome);

    fTax = IncomeTax(iIncome);
    printf("Your Income Tax is %0.2f\n",fTax);
    printf("Thanks for using our portal\n");

    return 0;
}