import java.util.Scanner;

class MyArray
{
    public float Arr[];

    public MyArray(int iSize)
    {
        Arr = new float[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter marks of students");
        for(int i=0; i<Arr.length; i++)
        {
            Arr[i] = sobj.nextFloat();
        }
        sobj.close();
    }

    public void Percentage()
    {
        for(int i=0; i<Arr.length; i++)
        {
            if(Arr[i] < 35)
            {
                System.out.println(Arr[i] + " Fail");
            }
            else if(Arr[i] >= 35 && Arr[i] <50) 
            {
                System.out.println(Arr[i] + " Pass Class");
            }
            else if(Arr[i]>=50 && Arr[i] < 60)
            {
                System.out.println(Arr[i] + " Second class");
            } 
            else if(Arr[i] >= 60 && Arr[i] <70)
            {
                System.out.println(Arr[i] + " First CLass");
            }
            else if(Arr[i] >= 70)
            {
                System.out.println(Arr[i] + " First class with Distinction");
            }
        }
    }

    public void Display()
    {
        System.out.println("Marks of students are");
        for(int i=0; i<Arr.length; i++)
        {
            System.out.print(Arr[i] + "\t");
        }
        System.out.println();
    }

}
public class Assignment46_5 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0;

        System.out.println("Enter the size of array");
        iSize = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);
        mobj.Accept();
        mobj.Display();
        mobj.Percentage();
        sobj.close();
    }
}
