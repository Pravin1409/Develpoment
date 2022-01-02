#include<stdio.h>
void Display(int);
int main()
{
    int ivalue=0;
    
    printf("enter number to display its table\n");
    scanf("%d",&ivalue);

    Display(ivalue);
     return 0;
}
void Display(int ino)
{
    if(ino<0)
    {
        ino=-ino;
    }
    if(ino==0)
    {
        return;
    }
    int icnt=0;
    for(icnt=1;icnt<=10;icnt++)
    {
        printf("%d\n",ino*icnt);
    }
}