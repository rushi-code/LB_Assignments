import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int iDigit = 0;
        int iReverse = 0;
        while(iNo != 0)
        {
            iDigit = iNo%10;
            iReverse = (iReverse * 10) + iDigit;
            iNo = iNo/10;
        }
        iNo = iReverse;
        while(iNo != 0)
        {
            iDigit = iNo%10;
            for(int i=1; i<=iDigit; i++)
            {
                System.out.print("*\t");
            }
            System.out.println();
            iNo = iNo/10;
        }
    }
}
public class Assignment49_1 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the number");
        int iNo = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iNo);

        sobj.close();
    }
}