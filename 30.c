/*
check number is perfect or not
*/

#include<stdio.h>
#include<stdbool.h>
int SumFactor(int);
bool CheckPerfect(int);
int main()
{
    int ivalue=0;
    int bRet=false;

    printf("enter the number ");
    scanf("%d",&ivalue);
    
    bRet=CheckPerfect(ivalue);
    if (bRet==true)
    {
        printf("number is perfect:\n");
    }
    else
    {
        printf("number not perfect:\n");
    }
     return 0;
}
/////////////////////////////////////////////////////////////////////////
bool CheckPerfect(int inumber)
{
    int iRet=0;
    iRet=SumFactor(inumber);
    if(inumber<0){inumber=-inumber;}
    if (iRet==inumber)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/////////////////////////////////////////////////////////////////////////
int SumFactor(int ino)
{
int isum=0;
int icnt=0;
if (ino<0)
{
    ino=-ino;
}
for (icnt=1;icnt<=(ino/2);icnt++)
{
    if (ino%icnt==0)
    {
        isum=isum+icnt;
    } 
}
return isum;
}