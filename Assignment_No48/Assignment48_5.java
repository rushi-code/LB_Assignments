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

    public boolean spareMatrix()
    {
        int i0Count = 0, iCount = 0;
        for (int i = 0; i < Arr.length/2; i++) 
        {
            for (int j = 0; j < Arr[i].length; j++) 
            {
                if(Arr[i][j] == 0)
                {
                    i0Count++;
                }
                else 
                {
                    iCount++;
                }
            }
        }
        if(i0Count>iCount)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
}

class Assignment48_5 
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

        boolean bRet = mobj.spareMatrix();
        if(bRet == true)
        {
            System.out.println("Matrix is spare matrix");
        }
        else
        {
            System.out.println("Matrix is not spare matrix");
        }
        sobj.close();
    }
}