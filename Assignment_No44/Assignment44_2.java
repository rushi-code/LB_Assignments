import java.util.Scanner;

class MyArray
{
    public void ArrayReplace(char Arr[])
    {
        System.out.println("Modifed charatcers of array are : ");
        for(int i=0; i<Arr.length; i++)
        {
            if(Arr[i]>='a' && Arr[i]<='z')
            {
                Arr[i] = (char)(Arr[i] - 32);
            }
            System.out.print(Arr[i] +"\t");
        }
        System.out.println();
    }
    
}
public class Assignment44_2 
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
        mobj.ArrayReplace(Arr);

        sobj.close();
    }
}