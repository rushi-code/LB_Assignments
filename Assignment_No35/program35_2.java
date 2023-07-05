//Write a java program which accept number from user and return count of odd digits

import java.util.Scanner;

class program35_2
{
    public static void main(String args[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number");
        int iNo = sobj.nextInt();
        Digits dobj = new Digits();
        int iRet = dobj.CountOdd(iNo);
        System.out.println("Total odd digits in number are "+iRet);
    }
}

class Digits
{
    int iDigit = 0;
    int iCount = 0;
    public int CountOdd(int iNo)
    {
        if(iNo<0)
        {
            iNo = -iNo;
        }

        while(iNo!=0)
        {
            iDigit = iNo%10;
            if(iDigit%2!=0)
            {
                iCount++;
            }
            iNo = iNo/10;
        }   

        return iCount;
    } 
}