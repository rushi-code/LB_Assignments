import java.util.Scanner;

class Matrix
{
    public int Arr[][];
    public int iNo;

    public Matrix(int iRow, int iCol, int iSearch)
    {
        Arr = new int[iRow][iCol];
        iNo = iSearch;
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

    public int Frequency()
    {
        int iCount  = 0;
        for(int i=0; i<Arr.length; i++)
        {
            for(int j=0; j<Arr[i].length; j++)
            {
                if(Arr[i][j] == iNo)
                {
                    iCount++;
                }
            }
        }
        return iCount; 
    }
}

public class Assignment47_2 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iSearch=0;

        System.out.println("Enter number of rows");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns");
        iCol = sobj.nextInt();

        System.out.println("Enter number whose frequency you want to calculate");
        iSearch = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol, iSearch);
        mobj.Accept();
        mobj.Display();

        int iRet = mobj.Frequency();
        System.out.println("Frquency of " +iSearch + " is " + iRet);

        sobj.close();
    }
}