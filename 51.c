#include<stdio.h>
int Addition(int Brr[])
{
    int icnt=0;
    int isum=0;
      for(icnt=0;icnt<5;icnt++)
     {
         isum=isum+Brr[icnt];
     }
     return isum;
}
int main()
{
    int Arr[5];         // Array of 5 integer
    int iRet=0;
    int icnt=0;
    printf("Enter the number \n");
  for(icnt=0;icnt<5;icnt++)
  {
        scanf("%d",&Arr[icnt]);
  }
   iRet=Addition(Arr);

    printf("Addition=%d\n",iRet);
     return 0;
}