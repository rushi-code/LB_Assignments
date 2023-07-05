//accept string and return difference between freq of small characters and freq of capital characters

import java.util.Scanner;

class program33_3 
{
    public static void main(String args[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the String :");
        String str = sobj.nextLine();

        StringX obj = new StringX();

        int iRet = obj.CountDiff(str);
        System.out.println("Diff between small and capital characters are "+iRet);

    }
}

class StringX
{
    public int CountDiff(String str)
    {
        char Arr[] = str.toCharArray();
        int iCountC = 0;
        int iCountS = 0;

        for(int iCnt = 0; iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt]>='a')&&(Arr[iCnt]<='z'))
            {
                iCountS++;
            }
            else if((Arr[iCnt]>='A')&&(Arr[iCnt]<='Z'))
            {
                iCountC++;
            }
        }
        
        return iCountS-iCountC;
    }
}
