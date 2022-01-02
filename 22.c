#include<stdio.h>
// function Declaration
int Display(int);
//Entry point function
int main()
{
    int ivalue=0;
    int iRet=0;
    printf("enter the number\n ");
    scanf("%d",&ivalue);

    iRet=Display(ivalue); //Display(752)     // Function call 
    printf("the adiition is :%d",iRet);
     return 0;
}
//Function defination
int Display(int ino)
{
    // Local variable
    // int ino=7521;
    int iDigit=0;
    int isum=0;


    
    while (ino>0)
    {
      iDigit=ino%10;    
        printf("%d\n",iDigit);  
    isum=isum+iDigit;
    
    ino=ino/10;             

    }
    return isum;
}