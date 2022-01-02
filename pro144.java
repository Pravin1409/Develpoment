import java.util.*;
class MArvellous
{
    public int Add(int Brr[])
    {
        int i=0,isum=0;
        for(i=0;i<Brr.length;i++)
        {
            isum=isum+Brr[i];
        }
        return isum;
    }
}
class pro144
{
    public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);
        int isize=0,i=0,iRet=0;

        System.out.println("Enter number of element:");
        isize=sobj.nextInt();

        int Arr[]=new int[isize];

        System.out.println("Enter number:");

        for(i=0;i<Arr.length;i++)
        {
            Arr[i]=sobj.nextInt();
        }
        MArvellous a=new MArvellous();
        iRet=a.Add(Arr);

        System.out.println("Addition are:"+iRet);



      
    }
}
