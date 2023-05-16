#include<stdio.h>

int SchoolFees(int iStandard)
{
    
    int iS1 = 8900, iS2 = 12790, iS3 = 21000, iS4 = 23450;
    switch(iStandard)
    {
        case 1:
        printf("Fees are %d\n",iS1);
        break;

        case 2:
        printf("Fees are %d\n",iS2);
        break;

        case 3:
        printf("Fees are %d\n",iS3);
        break;

        case 4:
        printf("Fees are %d\n",iS4);
        break;

        default:
        printf("Wrong Input");
    
    }
}

int main()
{
    char cArr[10] = "\0";
    int iStd = 0;
    int iRet = 0;
    printf("Enter Your School Name in One Word\n");
    scanf("%s",&cArr);
    printf("*** Welcome To %s Primary School ***\n",cArr);

    printf("Enter Standard Between 1 to 4\n");
    scanf("%d",&iStd);
    SchoolFees(iStd);



    return 0;
}