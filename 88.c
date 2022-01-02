#include<stdio.h>
#include<stdbool.h>
bool CheckPrime(int ino)
{
    int i=0;
    bool bAns=true;
    for(i=2;i<=ino/2;i++)
    {
        if (ino%i==0)
        {
            bAns=false;
            break;
        }
        
    }
    return bAns;
}
int main()
{
    int ino=0;
    bool bret=false;

    printf("enter number:");
    scanf("%d",&ino);

    bret=CheckPrime(ino);
    if (bret==true)
    {
      printf("number is prime.");
    }
    else{
        printf("not prime");
    }
    
    return 0;
}