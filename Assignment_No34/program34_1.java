//Write a java program which accept N numbers from user and return diifrence between summation of even elements and summation of odd elements

import java.util.*;
class program34_1
{
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number of elements");
        int iSize = sobj.nextInt();
    
        MyArray mobj = new MyArray(iSize);
        mobj.Accept();
        mobj.Display();

        int iRet = mobj.Diff();
        System.out.println("Differnce between summation of even and summation of odd is "+iRet);

    }
}

class ArrayX
{
    public int Arr[];
    public ArrayX(int iSize)
    {
        Arr = new int [iSize];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Elements");
        for(int iCnt =0; iCnt<Arr.length;iCnt++)
        {
            Arr[iCnt]= sobj.nextInt();
        }
    }
    public void Display()
    {
        System.out.println("Elements of Array are :");
        for(int iCnt =0; iCnt<Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}

class MyArray extends ArrayX
{
   public MyArray(int iSize)
   {
        super(iSize);
   }

   public int Diff()
   {
        int iSumE = 0;
        int iSumO = 0;
        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt]%2 == 0)
            {
                iSumE = iSumE + Arr[iCnt];
            }
            else 
            {
                iSumO = iSumO + Arr[iCnt];
            }
        }
        return iSumE - iSumO;
   }
}