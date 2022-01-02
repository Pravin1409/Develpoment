#include<stdio.h>
#include<stdlib.h>
int CountEven(int ptr[],int iSize)
{
    int i=0,icnt=0;
    for(i=0;i<iSize;i++)
    {
        if (ptr[i]%2==0)
        {
        icnt++;
        }
        
    }
    return icnt;
}
int main()
{
    int ilength=0,i=0,iRet=0;
    int*ptr=NULL;

    printf("Enter Number: ");
    scanf("%d",&ilength);

    ptr=(int*)malloc(sizeof(int)*ilength);

    printf("Enter Size %d\n",ilength);
    for(i=0;i<ilength;i++)
    {
        printf("Enter %d Element ",i+1);
        scanf("%d",&ptr[i]);
    }
    iRet=CountEven(ptr,ilength);
    printf("Count is : %d",iRet);

    free(ptr);
    return 0;
}