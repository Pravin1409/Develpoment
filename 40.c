#include<stdio.h>
void Display(int ino)
{
    int icnt=0;
    char ch='\0';
    for(icnt=1,ch='a';icnt<=ino;icnt++,ch++)
    {
       printf("%c\n",ch);
   }
   printf("\n");
}
int main()
{
    int ivalue=0;
    printf("Enter number");
    scanf("%d",&ivalue);
    Display(ivalue);
     return 0;
}