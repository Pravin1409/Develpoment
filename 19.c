#include<stdio.h>

void DisplayFactor(int);
int main()
{
 int ino=0;
 printf("enter the number=");
 scanf("%d",&ino);



DisplayFactor(ino);


return 0;
}
 void DisplayFactor(int ivalue)
{
    int icnt=0;
    for (icnt=1;icnt<=ivalue/2;icnt++)
    {
        if(ivalue<0)
        {
            ivalue=-ivalue;
        }
      if ((ivalue%icnt)==0)
      {
          printf("%d\n",icnt);
      }
      
    }
}
/*

ivalue=8

(8%1)==0            1
(8%2)==0            2
(8%3)==0
(8%4)==0            4
(8%5)==0
(8%6)==0
(8%7)==0
(8%8)==0






*/



