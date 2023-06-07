//Write a program which checks whether 5th and 18th bit is on or off

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X20010;

    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    bool bRet = 0;
    cout<<"Enter Number\n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet ==true)
    {
        cout<<"5th and 18th bit is ON\n";
    }
    else
    {
        cout<<"5th and 18th bit is OFF\n";
    }

    return 0;
}
