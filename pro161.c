#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
// #include<io.h>

int main()
{
    int fd=0,iRet=0;
    char Fname[30];
    char Data[30]="Marvellous Infosystem";
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

    iRet=write(fd,Data,10);
    printf("%d bytes gets succesfull wriiten in the file\n",iRet);
    
    return 0;
}