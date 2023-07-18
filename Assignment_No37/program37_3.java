//Write java program which accepts 2 strings from user and check whether first N content of two strings are equal or not

import java.util.Scanner;

class StringDemo
{
    public boolean  strCmp(String src, String dest, int iCnt)
    {
        boolean bFlag = true;

        char Arr[] = src.toCharArray();
        char Brr[] = dest.toCharArray();

        for(int i=0; i <iCnt; i++)
        {
            if(Arr[i] != Brr[i])
            {
                bFlag = false;
            }
        }
        return bFlag;
    }
}
public class program37_3
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the First string");
        String str1 = sobj.nextLine();

        System.out.println("Enter the Second string");
        String str2 = sobj.nextLine();

        System.out.println("Enter the number of characters you want to compare from starting position");
        int iNo = sobj.nextInt();

        StringDemo obj = new StringDemo();
        boolean bRet = obj.strCmp(str1, str2, iNo);

        if(bRet == true)
        {
            System.out.println("Strings are equal");
        }
        else
        {
            System.out.println("Strings are not equal");
        }
        sobj.close();
    }
}