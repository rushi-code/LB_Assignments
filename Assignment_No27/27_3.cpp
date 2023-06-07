//Write a program which accept one number from user and toogle 7th bit of that number. Return modified number

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,UINT iPos1)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;
    iMask = iMask<<(iPos1-1);

    iResult = iNo  ^ iMask;

    return iResult;
    
}

int main()
{
    UINT iValue = 0;
    UINT iBit1 = 0;

    UINT iAns = 0;
    cout<<"Enter Number\n";
    cin>>iValue;

    cout<<"Enter Postion of Bit\n";
    cin>>iBit1;

    


    iAns = ToggleBit(iValue,iBit1);

    cout<<"Result is "<<iAns<<"\n";


    return 0;
}