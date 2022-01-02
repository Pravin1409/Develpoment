#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool CheckNumber(int ptr[],int iSize)
{
    int i=0;
    bool bAns=false;
    for(i=0;i<iSize;i++)
    {
        if(ptr[i]==11)
        {
            bAns=true;
            break;
        }
    }
    return bAns;
}
int main()
{
    int ilength=0,i=0;
    bool bRet=false;
    int*ptr=NULL;

    printf("Enter number:");
    scanf("%d",&ilength);

    ptr=(int*)malloc(sizeof(int)*ilength);

    printf("Enter number:");
    for(i=0;i<ilength;i++)
    {
        printf("Enter %d : ",i+1);
        scanf("%d",&ptr[i]);
    }
    bRet=CheckNumber(ptr,ilength);
    if(bRet==true)
    {
        printf("Number is their");
    }
    else
    {
        printf("Number is not present");
    }
    free(ptr);
    return 0;
}