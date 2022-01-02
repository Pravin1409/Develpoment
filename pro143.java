import java.util.*;

class pro143
{
    public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);
        int isize=0;
        System.out.println("Enter number of element:");
        isize=sobj.nextInt();
        int Arr[]=new int[isize];
        System.out.println("Enter number:");
        for(int i=0;i<Arr.length;i++)
        {
            Arr[i]=sobj.nextInt();
        }

        System.out.println("Entersed Element are:");
        for(int i=0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
        
    }
}
