package MarvellousNumber;
import java.util.*;

public class ArrayX
{
    public int Arr[];

    public ArrayX(int isize)
    {
        Arr =new int[isize];
    } 

    public void Accept()
    { 
        Scanner sobj=new Scanner(System.in);
        int icnt=0;
        System.out.println("Enter element:");
        for(icnt=0;icnt<Arr.length;icnt++)
        { 
            Arr[icnt]=sobj.nextInt();
        }
    }
 
    public void Dispaly()
    {
        int icnt=0;
        System.out.println("Element are:");
        for(icnt=0;icnt<Arr.length;icnt++)
        {
            System.out.println(Arr[icnt]);
        }
    }
}