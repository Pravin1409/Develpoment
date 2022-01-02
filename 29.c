#include<stdio.h>
#include<stdbool.h>
int Reverse(int);
bool CheckPalindrom(int);
int main()
{
    int ivalue=0;
    bool bRet=false;

    printf("enter the number");
    scanf("%d",&ivalue);

    bRet=CheckPalindrom(ivalue);
    if (bRet==true)
    {
        printf("number is palindrom");
    }
    else
    {
        printf("number is not palindrom");
    }
     return 0;
}

int Reverse(int ino)
{
 int iDigit=0;
 int iRev=0;
 while (ino!=0)
 {
     iDigit=ino%10;
     iRev=iRev*10+iDigit;
     ino=ino/10;

 }
 return iRev;
}
bool CheckPalindrom(int iInput)
{

    int inumber=0;
    inumber=Reverse(iInput);
    if (inumber==iInput)
    {
     return true;
    }
    else
    {
        return false;
    }
}