#include<stdio.h>
#include<stdlib.h>
int Maximum(int ptr[],int iSize)
{
    int i=0;
    int iMax=ptr[0];
    for(i=0;i<iSize;i++)
    {
        if(ptr[i]>iMax)
        {

            iMax=ptr[i];
        }
    }
    return iMax;
}
int main()
{
    int*ptr=NULL;
    int i=0,ilength=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&ilength);

    ptr=(int*)malloc(sizeof(int)*ilength);

    printf("Enter %d size number:\n",ilength);
    for(i=0;i<ilength;i++)
    {
        printf("Enter %d:",i+1);
        
            scanf("%d",&ptr[i]);
        
    }
    iRet=Maximum(ptr,ilength);
    printf("Maximum is %d",iRet);
    free(ptr);
    return 0;
}