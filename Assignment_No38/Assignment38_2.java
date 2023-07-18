import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i=0, j=0;
        char ch = ' ';
        for(i=1; i<=iRow; i++)
        {
            for(j=1, ch='A'; j<=iCol; j++,ch++)
            {
                if(i%2 == 0)
                {
                    System.out.print((char)(ch+32) + "\t");               
                }
                else
                {
                    System.out.print((ch) + "\t");    
                }
            }
            System.out.println();
        }
    }
}
public class Assignment38_2 {
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