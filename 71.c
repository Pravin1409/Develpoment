#include<stdio.h>
void dislpay(char *Arr)
{
    printf(" name is:%s\n",Arr);
}
 int main()
 {
     char Arr[50];
    printf("Enter your name\n");

    scanf("%[^'\n']s",Arr);


    dislpay(Arr);
      return 0;
 }