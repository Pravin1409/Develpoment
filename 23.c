#include<stdio.h>
int CountEven(int);
int main()
{
    int ino=0,iRet=0;
    printf("enter the number:\n");
    scanf("%d",&ino);
    iRet=CountEven(ino);
    printf("number of even Digit are %d\n",iRet);
     return 0;
}
int CountEven(int ivalue)
{
  int iDigit=0;
  int icnt=0;
  if(ivalue==0)
  {
      return 1;
  }
  if(ivalue<0)
  {
      ivalue=-ivalue;
  }
  while (ivalue>0)
  {
      iDigit=ivalue%10;
       
     if(iDigit%icnt==0)
     {
         printf("%d",icnt);
     }
     ivalue=ivalue/10;
  }
//   return icnt;
}