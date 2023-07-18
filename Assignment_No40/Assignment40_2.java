import java.util.*;

class Pattern
{
    public void Display(String str)
    {
        char Arr[] = str.toCharArray();
        int iRow = Arr.length;
        int iCol = Arr.length;

        for(int i=iRow-1; i>=0; i--)
        {
            for(int j=0; j<iCol; j++)
            {
                if(i >= j)
                {
                    System.out.print(Arr[j] + "\t");
                }
            }
            System.out.println();
        }
    }
}
public class Assignment40_2 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please input string");
        String str = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.Display(str);

        sobj.close();
    }
}