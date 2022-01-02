#include<stdio.h>

int main()
{
    int Arr[5];         // Array of 5 integer
    int icnt=0;
    int isum=0;
    printf("Enter the number \n");
  for(icnt=0;icnt<5;icnt++)
  {
        scanf("%d",&Arr[icnt]);
  }
    

    // isum=isum+Arr[0];
    // isum=isum+Arr[1];
    // isum=isum+Arr[2];
    // isum=isum+Arr[3];
    // isum=isum+Arr[5];
     for(icnt=0;icnt<5;icnt++)
     {
         isum=isum+Arr[icnt];
     }

    printf("Addition=%d\n",isum);

    
     return 0;
}