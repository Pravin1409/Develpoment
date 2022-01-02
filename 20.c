#include<stdio.h>
// function Declaration
void Display();
//Entry point function
int main()
{
    

    Display();      // Function call 
     return 0;
}
//Function defination
void Display()
{
    // Local variable
    int ino=7521;
    int iDigit=0;


    iDigit=ino%10;          // 1
    printf("%d\n",iDigit);  // 1 
    ino=ino/10;             // 752



    iDigit=ino%10;          //2
    printf("%d\n",iDigit);  //2
    ino=ino/10;             //75


    iDigit=ino%10;          //5
    printf("%d\n",iDigit);  //5
    ino=ino/10;             //7

     iDigit=ino%10;          //7
    printf("%d\n",iDigit);  //7
    ino=ino/10;             //0





}