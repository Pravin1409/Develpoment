#include<stdio.h>
#include<stdlib.h>
int Maximum(int ptr[],int iSize)
{
    int i=0;
    int iMax=0;
    for(i=0;i<iSize;i++)
    {
        if (ptr[i]>iMax)
        {
            iMax=ptr[i];
        }
    }
    return iMax;
}
int main()
{
    int ilength=0;
    int i=0; // for loop
    int iRet=0;
    int*ptr=NULL;

    printf("Enter number:");
    scanf("%d",&ilength);

    ptr=(int*)malloc(sizeof(int)*ilength);
    printf("Enter %d Size number: ",ilength);
    for(i=0;i<ilength;i++)
    {
        printf("Enter number%d :",i+1);
        scanf("%d",&ptr[i]);
    }

    iRet=Maximum(ptr,ilength);
    printf("Maximum number is%d",iRet);
    free(ptr);



    return 0;
}