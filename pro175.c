#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    char Arr[10];
    fd=open("LB17.txt",O_RDWR);
    if(fd==-1)
    {
        printf("unable to open");
        return-1;

    }

    /////////////////////
    //0 from starting position
    //1 from currrent position
    // 2 from end of the file
    lseek(fd,10,2);

    
    write(1,"*",1);

    printf("\n");
    close(fd);
    return 0;
}