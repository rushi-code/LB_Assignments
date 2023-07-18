import java.util.Scanner;

class Matrix
{
    public int Arr[][];

    public Matrix(int iRow, int iCol)
    {
        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter elements of array");
        for(int i=0; i<Arr.length; i++)
        {
            for(int j=0; j<Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
        sobj.close();
    }

    public void Display()
    {
        System.out.println("Array elements are :");
        for(int i=0; i<Arr.length; i++)
        {
            for(int j=0; j<Arr[i].length; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        } 
    }

    public void SwapRows()
    {
        int temp[];
        for(int i=0; i<Arr.length; i=i+2)
        {
            temp = Arr[i];
            Arr[i] = Arr[i+1];
            Arr[i+1] = temp;
        }
        System.out.println("Matrix after swapping consecutive rows :");
        for(int i=0; i<Arr.length; i++)
        {
            for(int j=0; j<Arr[i].length; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }
    

}

public class Assignment47_5 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;

        System.out.println("Enter number of rows");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);
        mobj.Accept();
        mobj.Display();

        mobj.SwapRows();

        sobj.close();
    }
}
