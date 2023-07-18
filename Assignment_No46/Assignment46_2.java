import java.util.Scanner;

class MyArray
{
    public int Arr[];

    public MyArray(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter the elements of array");
        for(int i=0; i<Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
        sobj.close();
    }

    public void Display()
    {
        System.out.println("Elements of array are");
        for(int i=0; i<Arr.length; i++)
        {
            System.out.print(Arr[i] + "\t");
        }
        System.out.println();
    }

    public void SumArray()
    {
        for(int i=0; i<Arr.length; i++)
        {
            int iDigit = 0;
            int iSum = 0;
            while(Arr[i] != 0)
            {
                iDigit = Arr[i]%10;
                iSum = iSum + iDigit;
                Arr[i] = Arr[i]/10;
            }
            Arr[i] = iSum;
            System.out.println(Arr[i] + "\t");
            System.out.println();
        }
    }

}
public class Assignment46_2 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0;

        System.out.println("Enter the size of array");
        iSize = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);
        mobj.Accept();
        mobj.Display();
        mobj.SumArray();

        sobj.close();
    }
}