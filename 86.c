#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT ino,UINT iPos)
{
    UINT imask=0x00000001;
    UINT iResult=0; 
    if((iPos<1)||(iPos>32))
    {
        return false;
    }

    imask=imask<<(iPos-1);

    iResult=ino&imask;
    if (iResult==imask)
    {
        return true;
    }
    else
    {
        return false;
    }


}

int main()
{
    int ivalue=0,iBit=0;
    
    bool bRet=false;
    printf("Enter number");
    scanf("%d",&ivalue);

    printf("Enter position:\n");
    scanf("%d",&iBit);

    bRet=CheckBit(ivalue,iBit);

    if (bRet==true)
    {
        printf("4th bit on\n");
    }
    else
    {
        printf("4th bit of\n");
    }

    return 0;
}