#include<stdio.h>
int Display();
int main()
{
    int ino=0,iRet=0;
    printf("enter the number:\n");
    scanf("%d",&ino);
    iRet=Display(ino);
    printf("the count is %d",iRet);
     return 0;
}
int Display(int ivalue)
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
  while (ivalue>0)  // O(N) where N is number of digits    (N>=0)
  {
      iDigit=ivalue%10;
        if(iDigit%2==0)
        {
            icnt++;
        }
         ivalue=ivalue/10;
  }
  return icnt;
}