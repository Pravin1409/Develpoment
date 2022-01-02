import java.util.*;
class StringX
{
    public String str;

    public void Accept()
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string:");
        str=sobj.nextLine();
    }

    public void Display()
    {
        System.out.println("String is:"+str);
    }
}

class Marvellous extends StringX
{
    public String ReverseX()
    {
        char Arr[]=str.toCharArray();
        int istart=0,iend=Arr.length-1;
        char temp;
        while(istart<iend)
        {
            temp=Arr[istart];
            Arr[istart]=Arr[iend];
            Arr[iend]=temp;
            istart++;
            iend--;
        }
        return String.valueOf(Arr);
    }
    
}

class pro154
{
    public static void main(String arg[])
    {
        Marvellous mobj=new Marvellous();

         mobj.Accept();
         mobj.Display();
         String s=mobj.ReverseX();
         System.out.println("Revese string is:"+s);

    }
}
