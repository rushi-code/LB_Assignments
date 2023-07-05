//accept string and check whether it contains vowels or not

import java.util.Scanner;

class program33_4
{
    public static void main(String args[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the String :");
        String str = sobj.nextLine();

        StringX obj = new StringX();

        boolean bRet = false;

        bRet = obj.ChkVowel(str);
        if(bRet==true)
        {
            System.out.println("Vowel is present");
        }
        else
        {
            System.out.println("Vowel is not present");
        }

    }
}

class StringX
{
    public boolean ChkVowel(String str)
    {
        char Arr[] = str.toCharArray();
        Boolean bFlag = false;

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt]=='A')||(Arr[iCnt]=='E')||(Arr[iCnt]=='I')||(Arr[iCnt]=='O')||(Arr[iCnt]=='U')||(Arr[iCnt]=='a')||(Arr[iCnt]=='e')||(Arr[iCnt]=='i')||(Arr[iCnt]=='o')||(Arr[iCnt]=='u'))
            {
                bFlag = true;
                break;
                
            }
        }
        return bFlag;
        
    }
}
