//accept string and count number of small characters

import java.util.Scanner;

class program33_2
{
    public static void main(String args[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the String :");
        String str = sobj.nextLine();

        StringX obj = new StringX();

        int iRet = obj.CountSmall(str);
        System.out.println("Total Small Character in string are "+iRet);

    }
}

class StringX
{
    public int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();
        int iCount = 0;

        for(int iCnt = 0; iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt]>='a')&&(Arr[iCnt]<='z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}
