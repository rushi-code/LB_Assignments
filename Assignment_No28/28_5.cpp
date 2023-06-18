#include <iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0XF000000F;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout << "\nEnter the nummber: ";
    cin >> iValue;

    iRet = ToggleBit(iValue);

    cout << "The modified number is: "<< iRet;

    return 0;
}