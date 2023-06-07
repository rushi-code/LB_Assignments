//Write a program which checks whether first and last bit is on or off

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X80000001;

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
        cout<<"first and last bit is ON\n";
    }
    else
    {
        cout<<"first and last bit is OFF\n";
    }

    return 0;
}
/*
1000    0000    0000    0000    0000    0000    0000    0001
8       0       0       0       0       0       0       1

*/