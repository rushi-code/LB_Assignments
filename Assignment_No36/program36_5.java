//Write java program which accpet N numbers from user and return product of all odd elements
import java.util.*;
class program36_1
{
    public static void main(String args[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number of Elements");
        int iSize =  sobj.nextInt();
        int Arr[] = new int [iSize];

        MyArray mobj = new MyArray();
        mobj.Accept(Arr);
        mobj.Display(Arr);

        int iRet = mobj.Product(Arr);
        System.out.println("Product of odd element is "+iRet);
    
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
    public int Product(int Arr[])
    {
        int iMult = 1;
        for(int iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt]%2!= 0)
            {
                
                iMult = iMult * Arr[iCnt];
                
            }
            
        }
        return iMult;
    }
}
