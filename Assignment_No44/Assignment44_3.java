import java.util.Scanner;

class MyArray
{
    public int ArrayReplace(char Arr[], char ch)
    {
        int iCount = 0;
        for(int i=0; i<Arr.length; i++)
        {
            if(Arr[i] == ch)
            {
                iCount++;
            }
            else if(Arr[i] != ch)
            {
                if(Arr[i] >= 'a' && Arr[i]<='z')
                {
                    if(Arr[i] == (ch+32))
                    {
                        iCount++;
                    }
                }
                else if(Arr[i] >= 'A' && Arr[i] <= 'Z')
                {
                    if(Arr[i] == (ch-32))
                    {
                        iCount++;
                    }
                }
            }
        }
        return iCount;
    }
    
}
public class Assignment44_3 
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

        System.out.println("Enter the character whose frequency you want to check");
        char ch = sobj.next().charAt(0);

        MyArray mobj = new MyArray();
        int iRet = mobj.ArrayReplace(Arr, ch);
        System.out.println("Frequency : " + iRet);
        sobj.close();
    }
}
