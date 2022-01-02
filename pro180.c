#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
   int fd=0,isum=0,iRet=0,i=0;
   char fname[20];
   char Buffer[10];

   printf("Enter file name:");
   scanf("%s",fname);

   fd=open(fname,O_RDWR);
   if(fd==-1)
   {
       printf("unable open file");
       return -1;
   }
   while ((iRet=read(fd,Buffer,10))!=0)
   {
       isum=isum+iRet;
   }
   printf("Total count:%d",isum);
   

    close(fd);
    return 0;
}