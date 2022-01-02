#include<stdio.h>
#include<stdlib.h>
float Average(int Arr[],int isize)
{
    int iSum=0,i=0;
    float fResult=0.0f;


    for(i=0;i<isize;i++)
    {
        iSum=iSum+Arr[i];

    }
    fResult=(float)iSum/(float)isize;
    return fResult;
}
int main()
{
    int ilength=0,i=0;
    float fRet=0.0f;
    int*ptr=NULL;
    printf("Enter number of element \n");
    scanf("%d",&ilength);

    ptr=(int*)malloc(sizeof(int)*ilength);

    printf("Enter elements\n");
    for(i=0;i<ilength;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Enter data:\n");
    for(i=0;i<ilength;i++)
    {
        printf("%d\t\n",ptr[i]);
    }
    fRet=Average(ptr,ilength);
    printf("Average is %.2f\n",fRet);

    free(ptr);

    return 0;
}