/*
Write a program accept number from user and print its reverse number


with  filter
*/


#include<stdio.h>
int Reverse(int);
int main()
{
    int ivalue=0;
    int iRet=0;

    printf("enter the number:\n");
    scanf("%d",&ivalue);

    iRet=Reverse(ivalue);
    printf("the reverse number is:%d",iRet);
    
     return 0;
}
int Reverse(int ino)
{
    int iDigit=0;
    int iRev=0;

    if (ino<0)
    {
        ino=-ino;
    }
    
    while (ino>0)
    {
        iDigit=ino%10;

        iRev=(iRev*10)+iDigit;

        ino=ino/10;
    }
    return iRev;
}