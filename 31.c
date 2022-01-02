#include<stdio.h>
#include<stdbool.h>
bool CheckPerfect(int);
int main()
{
    int ivalue=0;
    bool bRet=0;
    printf("enter number");
    scanf("%d",&ivalue);

    bRet=CheckPerfect( ivalue);
     return 0;
}
bool CheckPerfect(int inumber)
{
  int isum=0, icnt=0;
  if (inumber<0)
  {
      inumber=-inumber;
  }
  


}