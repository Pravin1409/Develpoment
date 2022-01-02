/*
Write a program accept number from user and print addition of its even Digit.

*/


#include<stdio.h>
int EvenAddition(int);
int main()
{
    int ivalue=0;
    int iRet=0;
    printf("enter the number:");
    scanf("%d",&ivalue);
    iRet=EvenAddition(ivalue);
    printf("Addition is =%d",iRet);
     return 0;
}
int EvenAddition(int ino)
{
    int iDigit=0;
    int sum=0;
    if (ino<0)
    {
        ino=-ino;
    }
    
    while (ino>0)
    {
        iDigit=ino%10;
        if (iDigit%2==0)
        {
            sum=sum+iDigit;
        }
        ino=ino/10;
        
    }
    return sum;
    

}