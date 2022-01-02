#include<stdio.h>

int main()
{
    int Arr[5];         // Array of 5 integer

    int isum=0;
    printf("Enter the number \n");
    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);
    

    isum=Arr[0]+Arr[1]+Arr[2]+Arr[3]+Arr[4];
    printf("Addition=%d\n",isum);

    
     return 0;
}