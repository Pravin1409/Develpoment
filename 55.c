#include<stdio.h>
#include<stdlib.h>
int SumOdd(int ptr[],int iSize)
{
    int i=0;
    int iSum=0;
    for(i=0;i<iSize;i++)
    {
        if ((ptr[i]%2)!=0)
        {
            iSum=iSum+ptr[i];
        }
        
    }
    return iSum;
}
int main()
{
    int ilength=0;
    int i=0;
    int iRet=0;
    int *ptr=NULL;
     
     printf("Enter The Number");
     scanf("%d",&ilength);

     ptr=(int*)malloc(sizeof(int)*ilength);

     printf("Enter the %d number:\n",ilength);

     for(i=0;i<ilength;i++)
     {
         printf("Enter%d: ",i+1);
         scanf("%d",&ptr[i]);

     }
     iRet=SumOdd(ptr,ilength);
     printf("Sum Odd is: %d",iRet);

     free(ptr);
    return 0;
}