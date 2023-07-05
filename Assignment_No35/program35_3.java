//Write a java program which accept number from user and return count of digits between 3 and 7

import java.util.Scanner;

class program35_3
{
    public static void main(String args[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number");
        int iNo = sobj.nextInt();
        Digits dobj = new Digits();
        int iRet = dobj.CountRange(iNo);
        System.out.println("Count of Digit between 3 & 7 is "+iRet);
    }
}

class Digits
{
    int iDigit = 0;
    int iCount = 0;
    public int CountRange(int iNo)
    {
        if(iNo<0)
        {
            iNo = -iNo;
        }

        while(iNo!=0)
        {
            iDigit = iNo%10;
            if((iDigit>3)&&(iDigit<7))
            {
                iCount++;
            }
            iNo = iNo/10;
        }   

        return iCount;
    } 
}