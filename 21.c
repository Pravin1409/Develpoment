#include<stdio.h>
// function Declaration
void Display(int);
//Entry point function
int main()
{
    int ivalue=0;
    printf("enter the number\n ");
    scanf("%d",&ivalue);

    Display(ivalue); //Display(752)     // Function call 
     return 0;
}
//Function defination
void Display(int ino)
{
    // Local variable
    // int ino=7521;
    int iDigit=0;


    
    while (ino>0)
    {
      iDigit=ino%10;         
    printf("%d\n",iDigit);  
    ino=ino/10;             

    }
}