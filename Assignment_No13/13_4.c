#include<stdio.h>

int TouristBill(int iKilometer)
{
    int iBill = 0;
    if(iKilometer<100)
    {
        iBill = iKilometer * 25;
    }
    else if(iKilometer>100)
    {
        iBill = 2500 + ((iKilometer-100)*15);
    }
}

int main()
{
    char cArr[20];
    int iKm = 0;
    int iRet = 0;
    printf("Enter Your Tourist Company Name in One Word\n");
    scanf("%s",&cArr);
    printf("Welcome to %s Tourist Company Application\n",cArr);

    printf("Enter Total Kilometers Travelled\n");
    scanf("%d",&iKm);

    iRet = TouristBill(iKm);
    printf("Your Total Bill is %d\n",iRet);
    printf("Thanks for using %s\n",cArr);


    return 0;
}