#include<stdio.h>
int Lindex(char*str,char ch)
{
    int index=-1;
    int i=0;
    while (str[i]!='\0')
    {
        if (str[i]==ch)
        {
            index=i;
        }
        i++;
    }
    return index;
}
int main()
{
    char Arr[30];
    char ch;
    int iRet=0;

    printf("Enter String:");
    scanf("%[^\n]s",Arr);

 
    printf("Enter char:");
    scanf(" %c",&ch);

    iRet= Lindex(Arr,ch);
    printf("index:%d",iRet);
    return 0;
}