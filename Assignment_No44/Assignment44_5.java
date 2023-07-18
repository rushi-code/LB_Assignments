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
        System.out.println("Enter the elements of array");
        for(int i=0; i<Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
        sobj.close();
    }

    public void Pattern()
    {
        for(int i=0; i<Arr.length; i++)
        {
            for(int j=0; j<Arr[i]; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}
public class Assignment44_5 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array");
        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);
        aobj.Accept();
        aobj.Pattern();

        sobj.close();
    }
}