#include<stdio.h>
int Power(int,int);
int main()
{
    int ivalue1=0,ivalue2=0,iRet;
    printf("enter 1no");
    scanf("%d",&ivalue1);

     printf("enter 2no");
    scanf("%d",&ivalue2);

    iRet=Power(ivalue1,ivalue2);
    printf("result is %d",iRet);
     return 0;
}
int Power(int x,int y)
{
    int mul=1,icnt=0;
    for(icnt=1;icnt<=y;icnt++)
    {
        mul=mul*x;
    
    }
    return mul;
}