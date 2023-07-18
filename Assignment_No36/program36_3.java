//Write java program which accpet N numbers from user and accept another number as NO. return index of last occurence of that NO
import java.util.*;
class program36_1
{
    public static int ERR_NOTFOUND = -1;

    public static void main(String args[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number of Elements");
        int iSize =  sobj.nextInt();
        int Arr[] = new int [iSize];

        System.out.println("Enter Another Number");
        int iNo = sobj.nextInt();

        MyArray mobj = new MyArray();
        mobj.Accept(Arr);
        mobj.Display(Arr);

        int iRet = mobj.LastOcc(Arr, iNo);
        if(iRet == ERR_NOTFOUND)
        {
            System.out.println("There is no such member");
        }
        else
        {
            System.out.println("Last occurence of given number is "+iRet);
        }
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

    public int LastOcc(int Arr[],int iNo)
    {
        int iCnt = 0;
        int iPos = 0;
        for(iCnt = 0; iCnt<Arr.length;iCnt++)
        {
            if(Arr[iCnt]==iNo)
            {
                iPos = iCnt;
            }
            else
            {
                iPos = -1;
            }
            
        }
        return iPos;
    }
}
