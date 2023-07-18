import java.util.Scanner;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter elements of array");
        for(int i=0; i<Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
        sobj.close();
    }
    public void Display()
    {
        System.out.println("Elements of array are : ");
        for(int i=0; i<Arr.length; i++)
        {
            System.out.print(Arr[i] + "\t");
        }
        System.out.println();
    }

    public boolean CheckPalindrome()
    {
        boolean bFlag = true;

        for(int i=0; i<Arr.length; i++)
        {
            int temp = Arr[i];
            int iReverse = 0;
            int iDigit = 0;
            while(Arr[i] != 0)
            {
                iDigit = Arr[i]%10;
                iReverse = (iReverse * 10) + iDigit;
                Arr[i] = Arr[i]/10;
            }
            if(iReverse != temp)
            {
                bFlag = false;
                System.out.println(bFlag);
                break;
            }
        }
        System.out.println(bFlag);
        return bFlag;
    }
}

public class Assignment43_5 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iSize =0;

        System.out.println("Enter the size of array");
        iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);
        aobj.Accept();
        aobj.Display();
        aobj.CheckPalindrome();

        sobj.close();
    }
}