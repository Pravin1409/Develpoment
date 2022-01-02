#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool CheckNumber(int ptr[],int iSize,int ino)
{
    int i=0;
    for(i=0;i<iSize;i++)
    {
        if (ptr[i]==ino)
        {
            break;
        }
    }
    if(i==iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int ilength=0;
    int i=0;
    bool bRet=false;
    int*ptr=NULL;
    int ivalue=0;

    printf("Enter number:");
    scanf("%d",&ilength);

    

    ptr=(int*)malloc(sizeof(int)*ilength);

    printf("Enter number :");
    for(i=0;i<ilength;i++)
    {
        printf("Enter %d: ",i+1);
        scanf("%d",&ptr[i]);
    }

    printf("Enter the number which search:");
    scanf("%d",&ivalue);
    bRet=CheckNumber(ptr,ilength,ivalue);

    if (bRet==true)
    {
        printf("Number is Their");
    }
    else
    {
        printf("number is not their");
    }
    free(ptr);
    

    return 0;
}