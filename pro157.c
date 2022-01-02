#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
// #include<io.h>

int main()
{
    int fd=0;
    fd= creat("MArvellous.txt",07777);
    if (fd==-1)
    {
        printf("unable to create file");
    }
    else
    {
        printf("file succefully create");
    }
    
    return 0;
}