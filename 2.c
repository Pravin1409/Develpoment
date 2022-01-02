#include<stdio.h>
int count(char *str,char ch)
{
    int icnt=0;
    while (*str!='\0')
    {
        if ((*str==ch))
        {
        
            icnt++;
        }
        str++;
    }
    return icnt;
}
int main()
{
    char Arr[30];
    char ch;
    int iRet=0;
    printf("Enter the string");
    scanf("%[^\n]s",Arr);

    printf("Enter char:\n");
    scanf(" %c",&ch);
    iRet=count(Arr,ch);
    printf("Count is : %d",iRet);
    return 0;
}