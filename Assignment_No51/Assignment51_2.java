import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;
        int iTemp = iNo;
        int iRev = 0;
        while(iNo != 0)
        {
            iDigit = iNo%10;
            iCount++;
            iNo = iNo/10;
        }
        iNo = iTemp;
        while(iNo != 0)
        {
            iDigit = iNo%10;
            iRev = (iRev * 10) + iDigit;
            iNo = iNo/10;
        }
        iNo = iRev;
        for(int i=1; i<=iCount; i++)
        {
            while(iNo != 0)
            {
                iDigit = iNo%10;
                System.out.print(iDigit + "\t");
                iNo = iNo/10;
            }
            System.out.println();
            iNo = iRev;
        }
    }
}
public class Assignment51_2 
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