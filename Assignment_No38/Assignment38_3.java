import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i=0, j=0;
        char ch = ' ';
        for(i=1, ch='A'; i<=iRow; i++,ch++)
        {
            for(j=1; j<=iCol; j++)
            {
                System.out.print(ch + "\t");
            }
            System.out.println();
        }
    }
}
public class Assignment38_3 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter number of rows");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iRow, iCol);

        sobj.close();
    }
}