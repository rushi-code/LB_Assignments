import java.util.Scanner;

class MyArray
{
    public int Diffference(char Arr[])
    {
        int iFreqCap = 0;
        int iFreqSmall = 0;
        for(int i=0; i<Arr.length; i++)
        {
            if(Arr[i]>='a' && Arr[i]<='z')
            {
                iFreqSmall++;
            }
            else if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                iFreqCap++;
            }
        }
        return iFreqCap-iFreqSmall;
    }
    
}
public class Assignment44_4 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter the character array");
        char Arr[] = sobj.next().toCharArray();

        System.out.println("Entered array elements are :");
        for(int i=0; i<Arr.length; i++)
        {
            System.out.print(Arr[i] + "\t");
        }
        System.out.println("\n");

        MyArray mobj = new MyArray();
        int iRet = mobj.Diffference(Arr);
        System.out.println("Difference between Frequency of capital and small letters is: " +iRet);

        sobj.close();
    }
}