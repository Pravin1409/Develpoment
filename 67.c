#include<stdio.h>
#include<stdlib.h>
int LastOccurance(int ptr[],int iSize,int ino) // using  forward loop
{
    int i=0,index=-1;
    for(i=0;i<iSize;i++)
    {
        if (ptr[i]==ino)
        {
            index=i;
        }
    }
  return index;
}
int main()
{
    int ilength=0;
    int i=0;
    int iRet=0;
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
    iRet=LastOccurance(ptr,ilength,ivalue);

    if (iRet==-1)
    {
        printf("their is  no present");
    }
    else
    {
        printf("number is present :%d",iRet);
    }
    free(ptr);
    

    return 0;
}