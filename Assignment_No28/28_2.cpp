//Write a program which accept one number and position from user and off that bit and return modified number

#include<iostream> 
using namespace std;
typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    UINT iMask = 0X00000001;

    UINT iResult = 0;

    if((iPos<1)||(iPos>32))
    {
        cout<<"Invalid position\n";
        return false;
    }

    iMask = iMask<<(iPos-1);

    iResult = iNo ^ iMask;

    return iResult;

    
}

int main()
{
    int iValue = 0;
    int iBit = 0;
    int iRet = 0;
    
    cout<<"Enter Number\n";
    cin>>iValue;

    cout<<"Enter Position\n";
    cin>>iBit;

    iRet = OffBit(iValue,iBit);

    cout<<"Result is "<<iRet<<"\n";
    return 0;


}