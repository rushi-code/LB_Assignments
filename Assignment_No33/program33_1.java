//accept string and count number of capital characters

import java.util.Scanner;

class program33_1 
{
    public static void main(String args[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the String :");
        String str = sobj.nextLine();

        StringX obj = new StringX();

        int iRet = obj.CountCap(str);
        System.out.println("Total Capital Character in string are "+iRet);

    }
}

class StringX
{
    public int CountCap(String str)
    {
        char Arr[] = str.toCharArray();
        int iCount = 0;

        for(int iCnt = 0; iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt]>='A')&&(Arr[iCnt]<='Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}
