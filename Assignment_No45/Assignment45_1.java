import java.util.Scanner;

class Pattern
{
    public void Dispaly(int iRow, int iCol)
    {
        for(int i=1; i<=iRow; i++)
        {
            for(int j=iCol; j>0; j--)
            {
                if(i==j)
                {
                    System.out.print("#\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }
    }
}
public class Assignment45_1 {
    public static void main(String[] args) {
        
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;

        System.out.println("Enter number of rows");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns");
        iCol = sobj.nextInt();
        
        Pattern pobj = new Pattern();
        pobj.Dispaly(iRow, iCol);

        sobj.close();
    }
}