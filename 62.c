#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool CheckNumber(int ptr[],int iSize)
{
    int i=0;
    for(i=0;i<iSize;i++)
    {
        if (ptr[i]==11)
        {
            return true;
        }
        
    }
    return false;
}
int main()
{
    int ilength=0;
    int*ptr=NULL;
    int i=0;
    bool bRet=false;

    printf("Enter number");
    scanf("%d",&ilength);

    ptr=(int*)malloc(sizeof(int)*ilength);

    printf("Enter number: \n");
    for(i=0;i<ilength;i++)
    {
        printf("Enter %d: ",i+1);
        scanf("%d",&ptr[i]);
    }
    bRet=CheckNumber(ptr,ilength);
    if (bRet==true)
    {
        printf("Number is their");
    }
    else
    {
        printf("Number is not Their");
    }
    free(ptr);
    
    return 0;
}