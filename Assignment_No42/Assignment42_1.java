import java.util.Scanner;

public class Assignment42_1 
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
        aobj.Display();

        sobj.close();
    }
}

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
