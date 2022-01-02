import java.util.*;
class ArrayX
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
class Marvellous extends ArrayX
{
    public Marvellous(int ivalue)
    {
        super(ivalue);
    }

    public int Add()
    {
        int isum=0,icnt=0;
        for(icnt=0;icnt<Arr.length;icnt++)
        {
            isum=isum+Arr[icnt];
        }
        return isum;
    }
}
class pro145 
{
    public static void main(String arg[])
    {
        Scanner obj=new Scanner(System.in);
        int ilength=0,iRet=0;

        System.out.println("Enter the number of element:");
        ilength=obj.nextInt();

        Marvellous mobj=new Marvellous(ilength);

       mobj.Accept();
       mobj.Dispaly();
       iRet=mobj.Add();
       System.out.println("Addition is:"+iRet);
    }
}
