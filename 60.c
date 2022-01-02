//MIN

#include<stdio.h>
#include<stdlib.h>
int Minimum(int ptr[],int iSize)
{
    int i=0;  // for loop
    int iMin=ptr[0];
    for(i=0;i<iSize;i++)
    {
        if(ptr[i]<iMin)
        {
            iMin=ptr[i];
        }
    }
    return iMin;
}
int main()
{
    int*ptr=NULL;
    int i=0;
    int iRet=0;
    int ilength=0;

    printf("Enter The number:");
    scanf("%d",&ilength);

    ptr=(int*)malloc(sizeof(int)*ilength);

    printf("Enter number: \n");
    for(i=0;i<ilength;i++)
    {
        printf("Enter %d :",i+1);
        scanf("%d",&ptr[i]);
    }
    iRet=Minimum(ptr,ilength);
    printf("Minimum is %d:",iRet);
    return 0;
}