import java.util.Scanner;

class MyArray
{
    public int CapFrequency(char Arr[])
    {
        int iFrequency = 0;
        for(int i=0; i<Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                iFrequency++;
            }
        }
        return iFrequency;
    }
    
}
public class Assignment46_4 
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
        int iRet = mobj.CapFrequency(Arr);
        System.out.println("Number of caital letters is: " +iRet);

        sobj.close();
    }
}