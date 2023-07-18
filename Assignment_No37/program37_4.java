//Accept string from user and reverse contents of that string by toggling the case

import java.util.Scanner;

class StringDemo
{
    public String strRevTogX(String str)
    {
        char cTemp = ' ';
        char Arr[] = str.toCharArray();
        
        int iStart = 0;
        int iEnd = Arr.length-1;

        while(iStart < iEnd)
        {
            cTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = cTemp;

            iStart++;
            iEnd--;
        }

        for(int iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }
            else if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32);
            }
        }
        return new String(Arr);
    }
}
public class program37_4
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the string");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();
        String sRet = obj.strRevTogX(str);
        System.out.println("Reversed and toggled string is : " + sRet);

        sobj.close();
    }
}