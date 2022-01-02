#include<stdio.h>
#include<stdbool.h>
  bool Checkpalindrom();
int main()
{
    int ivalue=0;
    int bRet=false;
    printf("enter number");
    scanf("%d",&ivalue);
    bRet=Checkpalindrom(ivalue);

    if (bRet==true)
    {
        printf("Number is palindrom\n");
    }
    else{
        printf("Number is not palidrom");
    }
    
    return 0;
}


bool Checkpalindrom(int ino)
{
    int iDigit=0;
    int iRev=0;
    int iTemp=ino;

    while (ino!=0)
    {
        iDigit=ino%10;
        iRev=iRev*10+iDigit;
        ino=ino/10;
    }
    if (iRev==iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }

}