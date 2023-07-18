import java.util.Scanner;

class ArrayX
{
    public int Arr1[];
    public int Arr2[];

    public ArrayX(int iSize1, int iSize2)
    {
        Arr1 = new int[iSize1];
        Arr2 = new int[iSize2];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the elememts of first array");
        for(int i=0; i<Arr1.length; i++)
        {
            Arr1[i] = sobj.nextInt();
        }
        System.out.println("Please enter the elememts of second array");
        for(int j=0; j<Arr2.length; j++)
        {
            Arr2[j] = sobj.nextInt();
        }
        sobj.close();
    }

    public void Display()
    {
        System.out.println("Elememts of first array");
        for(int i=0; i<Arr1.length; i++)
        {
            System.out.print(Arr1[i] + "\t");
        }
        System.out.println();
        System.out.println("Elememts of second array");
        for(int j=0; j<Arr2.length; j++)
        {
            System.out.print(Arr2[j] + "\t");
        }
        System.out.println();
    }

}

class MyArray extends ArrayX
{
    public int Result[];
    public MyArray(int iSize1, int iSize2)
    {
        super(iSize1, iSize2);
        Result = new int[Arr1.length+Arr2.length];
    }

    public int[] CopyArrayRev()
    {
        int iPos = 0;
        for(int i=Arr1.length-1; i>=0; i--)
        {
            Result[iPos] = Arr1[i];
            iPos++;
        }
        for(int j=Arr2.length-1; j>=0; j--)
        {
            Result[iPos] = Arr2[j];
            iPos++;
        }
        return Result;
    }

    public void RevDisplay()
    {
        System.out.println("Array elements after copying in reverse order");
        for(int i=0; i<Result.length; i++)
        {
            System.out.println(Result[i] + "\t");
        }
    }
}

public class Assignment43_3 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iSize1 = 0, iSize2 = 0;

        System.out.println("Enter the size of first array");
        iSize1 = sobj.nextInt();

        System.out.println("Enter the size of second array");
        iSize2= sobj.nextInt();

        MyArray mobj = new MyArray(iSize1, iSize2);
        mobj.Accept();
        mobj.Display();
        mobj.CopyArrayRev();
        mobj.RevDisplay();

        sobj.close();
    }
}

