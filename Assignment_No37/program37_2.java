//Write java program which accepts 2 strings from user and check whether two strings are equal or not

import java.util.*;

class program37_2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter First String");
        String S1 = sobj.nextLine();

        System.out.println("Enter Second String");
        String S2 = sobj.nextLine();

        StringX obj = new StringX();
        boolean bRet;
        
        
         bRet  = obj.StrCmpX(S1, S2);

        if(bRet == true)
        {
            System.out.println("Both Strings are equal");
        }
        else
        {
            System.out.println("Both Strings are not equal");
        }
        
    }
}

class StringX
{
    public boolean StrCmpX(String src, String Dest)
    {
        if(src.length()!=Dest.length())
        {
            return false;
        }

        boolean bFlag = true;
        char Arr[] = src.toCharArray();
        char Brr[] = Dest.toCharArray();

        for(int iCnt = 0; iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt]==Brr[iCnt])&&(Arr.length == Brr.length))
            {
                bFlag = true;
            }
        }
        return bFlag;
    }
}
