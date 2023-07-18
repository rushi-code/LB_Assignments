import java.util.Scanner;

public class Assignment43_4
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iSize1 = 0, iSize2 = 0;

        System.out.println("Enter the size of first array");
        iSize1 = sobj.nextInt();

        System.out.println("Enter the size of second array");
        iSize2= sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize1, iSize2);
        aobj.Accept();
        aobj.CopyArray();
        aobj.Display();

        sobj.close();
    }
}

class ArrayX
{
    public int Arr1[];
    public int Arr2[];
    public int Result[];

    public ArrayX(int iSize1, int iSize2)
    {
        Arr1 = new int[iSize1];
        Arr2 = new int[iSize2];
        Result = new int[Arr1.length + Arr2.length];
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

    public int[] CopyArray()
    {
        int iPos = 0;
        for(int i=0; i<Arr1.length; i++)
        {
            Result[iPos] = Arr1[i];
            iPos++;
        }
        for(int j=0; j<Arr2.length; j++)
        {
            Result[iPos] = Arr2[j];
            iPos++;
        }
        return Result;
    }
    public void Display()
    {
        System.out.println("Elements of concatenated array : ");
        for(int i=0; i<Result.length; i++)
        {
            System.out.print(Result[i] + "\t");
        }
        System.out.println();
    }
}
