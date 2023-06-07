//Write a program which accept one number from user and toogle 7th  and 10th bit of that number. Return modified number

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,UINT iPos1,UINT iPos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001; 
    UINT iMask =  0X00000000;
    UINT iResult = 0;
    iMask1 = iMask1<<(iPos1-1);
    iMask2 = iMask2<<(iPos2-1);

    iMask = iMask1 ^ iMask2;

    iResult = iNo  ^ iMask;

    return iResult;
    
}

int main()
{
    UINT iValue = 0;
    UINT iBit1 = 0;
    UINT iBit2 = 0;

    UINT iAns = 0;
    cout<<"Enter Number\n";
    cin>>iValue;

    cout<<"Enter Postion of first Bit\n";
    cin>>iBit1;

    cout<<"Enter Postion of second Bit\n";
    cin>>iBit2;


    iAns = ToggleBit(iValue,iBit1,iBit2);

    cout<<"Result is "<<iAns<<"\n";


    return 0;
}