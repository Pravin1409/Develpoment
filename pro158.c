#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
// #include<io.h>

int main()
{
    int fd=0;
    char Fname[30];
    printf("Enter file name:");
    scanf("%s",Fname);
    fd= creat(Fname,0777);
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