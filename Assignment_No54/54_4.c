#include<stdio.h>

int Fact(int iNo){
    static int iFact =1;
    if(iNo != 0){
        iFact = iFact*iNo;
        Fact(--iNo);
    }
    return iFact;
}

int main(){
    int iValue =0;
    int iRet =0;
    printf("Enter the number: ");
    scanf("%d", &iValue);

    iRet = Fact(iValue);

    printf("The factorial is: %d", iRet );

    return 0;
}