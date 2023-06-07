//Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OffBit(UINT iNo,UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask<<(iPos - 1);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return iNo^iMask;
    }
    else
    {
        return iNo;
    }
}

int main()
{
    UINT iValue = 0;
    UINT iBit = 0;
    UINT iAns = 0;
    cout<<"Enter Number\n";
    cin>>iValue;
    cout<<"Enter Postion of Bit\n";
    cin>>iBit;

    iAns = OffBit(iValue,iBit);

    cout<<"Result is "<<iAns<<"\n";


    return 0;
}