#include<stdio.h>
int Lindex(char str[],char c)

{
    int i=0;
    
    while (str[i]!='\0')
    {
        if (str[i]==c)
        {
            break;
        }
        i++;
    }
    if (str[i]!=c)
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
    char Arr[30];
    char ch;
    int iRet=0;
    printf("Enter string:");
    scanf("%[^\n]s",Arr);

    printf("Enter character:");
    scanf(" %c",&ch);
    iRet=Lindex(Arr,ch);
    if (iRet==-1)
    {
        printf("no found");
    }
    else
    {
        printf("index:%d",iRet);
    }
    

    
    
    return 0;
}