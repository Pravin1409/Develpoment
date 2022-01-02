#include<stdio.h>
void Display(int ino)
{
    int icnt=0;
    for(icnt=1;icnt<=ino;icnt++)
    {
       if (icnt%2==0)
       {
           printf("#\t");
       }
       else
       {
           printf("*\t");
       }
    }
}
int main()
{
    int ivalue=0;
    printf("Enter number");
    scanf("%d",&ivalue);
    Display(ivalue);
     return 0;
}