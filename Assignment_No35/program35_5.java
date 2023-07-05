//Write a java program which accept number from user and return difference between summation of even digits and summation of odd digits

import java.util.Scanner;

class program35_5
{
    public static void main(String args[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number");
        int iNo = sobj.nextInt();
        Digits dobj = new Digits();
        int iRet = dobj.CountDiff(iNo);
        System.out.println("Diiference between summation of even and odd digits is "+iRet);
    }
}

class Digits
{
    int iDigit = 0;
    int iSumE = 0;
    int iSumO = 0;
    public int CountDiff(int iNo)
    {
        while(iNo!=0)
        {
            iDigit = iNo%10;

            if(iDigit%2==0)
            {
                iSumE = iSumE + iDigit;
            }
            else
            {
                iSumO = iSumO + iDigit;
            }

            iNo = iNo/10;
        }   

        return iSumE-iSumO;
    } 
}