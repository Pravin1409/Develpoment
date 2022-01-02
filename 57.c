#include<stdio.h>
#include<stdlib.h>
int CountRange(int ptr[],int iSize)
{
    int i=0;
    int icnt=0;
    for(i=0;i<iSize;i++)
    {
        if((ptr[i]>10)&&(ptr[i]<20))
        {
            icnt++;
        }
    }
    return icnt;
}
int main()
{
    int ilength=0;
    int i=0;
    int iRet=0;
    int*ptr=NULL;

    printf("Enter number:");
    scanf("%d",&ilength);

    ptr=(int*)malloc(sizeof(int)*ilength);

    printf("Enter number:\n");
    for(i=0;i<ilength;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&ptr[i]);
    }

    iRet =CountRange(ptr,ilength);
    printf("The Count is :%d",iRet);
    free(ptr);
    return 0;
}