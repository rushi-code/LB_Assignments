import java.util.Scanner;

class ArrayX
{
    public int Arr1[];
    public int Arr2[];

    public ArrayX(int iSize1, int iSize2)
    {
        Arr1 = new int[iSize1];
        Arr2 = new int[iSize2];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the elememts of first array");
        for(int i=0; i<Arr1.length; i++)
        {
            Arr1[i] = sobj.nextInt();
        }
        System.out.println("Please enter the elememts of second array");
        for(int j=0; j<Arr2.length; j++)
        {
            Arr2[j] = sobj.nextInt();
        }
        sobj.close();
    }

    public void Minimum()
    {
        int iMin1 = Arr1[0];
        for(int i=0; i<Arr1.length; i++)
        {
            if(Arr1[i] < iMin1)
            {
                iMin1 = Arr1[i]; 
            }
        }
        int iMin2 = Arr2[0];
        for(int j=0; j<Arr2.length; j++)
        {
            if(Arr2[j] < iMin2)
            {
                iMin2 = Arr2[j]; 
            } 
        }
        System.out.println("Minimum element from array1 is : " + iMin1);
        System.out.println("Minimum element from array2 is : " + iMin2);
    }

}

public class Assignment43_2
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iSize1 = 0, iSize2 = 0;

        System.out.println("Enter the size of first array");
        iSize1 = sobj.nextInt();

        System.out.println("Enter the size of second array");
        iSize2= sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize1, iSize2);
        aobj.Accept();
        aobj.Minimum();

        sobj.close();
    }
}
