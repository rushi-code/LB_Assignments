//Write a program which accept one number from user and on its first 4 bits. Return modified number

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0X0000000F;
    UINT iResult = 0;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iBit = 0;
    UINT iAns = 0;
    cout<<"Enter Number\n";
    cin>>iValue;
   
    iAns = OnBit(iValue);

    cout<<"Result is "<<iAns<<"\n";


    return 0;
}