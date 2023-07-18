//Write java program which accpet N numbers from user and accept range, Display all elements from that range
import java.util.*;
class program36_1
{
    public static void main(String args[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number of Elements");
        int iSize =  sobj.nextInt();
        int Arr[] = new int [iSize];

        System.out.println("Enter Starting Number");
        int iStart = sobj.nextInt();

        System.out.println("Enter Ending Number");
        int iEnd = sobj.nextInt();

        MyArray mobj = new MyArray();
        mobj.Accept(Arr);
        mobj.Display(Arr);

        mobj.DisplayRange(Arr, iStart,iEnd);
    
    }

}
class ArrayX
{
    public void Accept(int Arr[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Elements of Array");
        for(int iCnt = 0; iCnt<Arr.length;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display(int Arr[])
    {
        System.out.println("Elements of Array are ");
        for(int iCnt = 0; iCnt<Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}
class MyArray extends ArrayX
{

    public void DisplayRange(int Arr[],int iStart, int iEnd)
    {
        System.out.println("Element from this range are");
        for(int iCnt = 0; iCnt<Arr.length;iCnt++)
        {
            if(Arr[iCnt]>=iStart && Arr[iCnt]<=iEnd)
            {
               System.out.print(Arr[iCnt] +"\t");
            }   
        }
    }
}
