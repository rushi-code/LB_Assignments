//Write a program which accept one number and position from user and check whether bit at that postion is on or off. If bit is on return TRUE otherwise return FALSE.

#include<iostream> 
using namespace std;
typedef unsigned int UINT;

bool CheckBit(UINT iNo, int iPos)
{
    UINT iMask = 0X00000001;

    UINT iResult = 0;

    iMask = iMask<<(iPos-1);

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
    int iValue = 0;
    int iBit = 0;
    bool bRet =  false;

    cout<<"Enter Number\n";
    cin>>iValue;

    cout<<"Enter Position\n";
    cin>>iBit;

    bRet = CheckBit(iValue,iBit);

    if(bRet ==true)
    {
        cout<<"Bit is on\n";
    }
    else
    {
        cout<<"Bit is off\n";
    }
    
    return 0;


}