//Write java program which accepts 2 strings from user and concat N characters of second string after first string. Value of N should be accepted from user

import java.util.*;

class program37_1
{
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter First String");
        String S1 = sobj.nextLine();

        System.out.println("Enter Second String");
        String S2 = sobj.nextLine();

        System.out.println("Enter Number of characters that concat");
        int iNo = sobj.nextInt();

        StringX obj = new StringX();
        String CntX = obj.StrNCatX(S1, S2, iNo);
        System.out.println("String After Concatination is "+CntX);
    }
}

class StringX
{
    public String StrNCatX(String src, String dest, int iCnt)
    {
        char Arr[] = src.toCharArray();
        char Brr[] = dest.toCharArray();
        char Str[] = new char [Arr.length + Brr.length];

        if(iCnt>Brr.length)
        {
            iCnt = Brr.length;
        }
        int i = 0;
        for(int iCount = 0; iCount<iCnt; iCount++)
        {
            Str[i] = Brr[iCount];
            i++;
        }

        String str = new String(Str);

        return(src + " " +str);
    }
}