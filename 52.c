#include<stdio.h>
#include<stdlib.h>
int Addition(int Brr[],int isize)
{
    int icnt=0;
    int isum=0;
      for(icnt=0;icnt<isize;icnt++)
     {
         isum=isum+Brr[icnt];
     }
     return isum;
}
int main()
{
    int *Arr=NULL;         // Array of 5 integer
    int iRet=0;
    int icnt=0;
    int ilength=0;

    printf("Enter number of element\n");
    scanf("%d",&ilength);


    Arr=(int*)malloc(sizeof(int)*ilength);


    printf("Enter the number \n");
  for(icnt=0;icnt<ilength;icnt++)
  {
        scanf("%d",&Arr[icnt]);
  }
   iRet=Addition(Arr,ilength);  //Addition(200)

    printf("Addition=%d\n",iRet);

    free(Arr);
     return 0;
}