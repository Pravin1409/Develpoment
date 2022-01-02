#include<stdio.h>
void dislpay(char *Brr)
{
    printf("%c\n",*Brr);
        Brr++;

      printf("%c\n",*Brr);
        Brr++;
      printf("%c\n",*Brr);
        Brr++;
      printf("%c\n",*Brr);
         Brr++; 
     printf("%c\n",*Brr);
         Brr++;
}
 int main()
 {
     char Arr[50];
    printf("Enter your name\n");

    scanf("%[^'\n']s",Arr);


    dislpay(Arr);
      return 0;
 }