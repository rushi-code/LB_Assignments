//Write a java program which accept number from user and return multiplication of all digits

import java.util.Scanner;

class program35_4
{
    public static void main(String args[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number");
        int iNo = sobj.nextInt();
        Digits dobj = new Digits();
        int iRet = dobj.Multiply(iNo);
        System.out.println("Multiplication of digts is "+iRet);
    }
}

class Digits
{
    int iDigit = 0;
    int iMult = 1;
    public int Multiply(int iNo)
    {
        
        if(iNo<0)
        {
            iNo = -iNo;
        }

        while(iNo!=0)
        {
            iDigit = iNo%10;

            if(iDigit == 0)
            {
                iDigit = 1;
            }
            iMult = iMult * iDigit; 
            iNo = iNo/10;
        }   

        return iMult;
    } 
}