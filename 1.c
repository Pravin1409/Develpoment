#include<stdio.h>
#include<stdbool.h>
bool CheckChar(char *str,char ch)
{
    while (*str!='\0')
    {
        if (*str==ch)
        {
            break;
        }
        str++;
    }
    if (*str==ch)
    {
        return true;
    }
    else
    {
        return false;
    }
    
    
}
int main()
{
    char Arr[40];
    char ch;
    bool bRet=false;
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter charcter:\n");
    scanf(" %c",&ch);

    bRet=CheckChar(Arr,ch);
    if (bRet==true)
    {
        printf("Character  found ");
    }
    else
    {
        printf("Character not foun");
    }
    return 0;
}