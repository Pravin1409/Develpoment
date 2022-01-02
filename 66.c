#include<stdio.h>
#include<stdlib.h>
int FirstOccurance(int ptr[],int iSize,int ino)
{
    int i=0;
    for(i=0;i<iSize;i++)
    {
        if (ptr[i]==ino)
        {
            break;
        }
    }
    if(i==iSize)
    {
        return -1;
    }
    else
    {
        return i;
    }
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
    iRet=FirstOccurance(ptr,ilength,ivalue);

    if (iRet==-1)
    {
        printf("their is a no such number");
    }
    else
    {
        printf("number is their at index :%d\n",iRet);
    }
    free(ptr);
    

    return 0;
}