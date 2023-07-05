//accept string and reverse it

import java.util.Scanner;

class program33_5
{
    public static void main(String args[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the String :");
        String str = sobj.nextLine();

        StringX obj = new StringX();

        String sret = obj.Rev(str);
        System.out.println("Reverse string is "+sret);
        
    }
}

class StringX
{
    public String Rev(String str)
    {
        char Arr[] = str.toCharArray();
        int iStart = 0;
        int iEnd = Arr.length-1;

        char cTemp =' ';

        while(iStart<iEnd)
        {
            cTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = cTemp;

            iStart++;
            iEnd--;
        }
        return new String(Arr);
    }
}
