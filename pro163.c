#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
// #include<io.h>

int main()
{
    int fd=0,iRet=0;
    char Fname[30];
    char Data[7];
    printf("Enter file name:");
    scanf("%s",Fname);
    fd= open(Fname,O_RDWR);
    if (fd==-1)
    {
        printf("unable to open file");
        return -1;
    }
    else
    {
        printf("file succefully opened FD:%d\n",fd);
    }

    iRet=read(fd,Data,7);
    // printf("%d bytes gets succesful read in the file\n",iRet);
    // printf("Data is\n");
    write(1,Data,iRet);
    return 0;
}