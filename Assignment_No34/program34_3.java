//Write a java program which accept N numbers from user and display all such element which are even and  divisible by 5

import java.util.*;
class program34_3
{
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number of elements");
        int iSize = sobj.nextInt();
    
        MyArray mobj = new MyArray(iSize);
        mobj.Accept();
        mobj.Display();

        mobj.DisplayDiv5();
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

   public void DisplayDiv5()
   {
        
        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt]%2==0)&&(Arr[iCnt]%5==0))
            {
                System.out.print(Arr[iCnt] +"\t");
            }
            
        }
        
   }
}