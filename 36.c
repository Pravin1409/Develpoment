#include<stdio.h>
void Display(int ino)
{
    int icnt=0;
    for(icnt=ino;icnt>=1;icnt--)
    {
        printf("%d \t",icnt);
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