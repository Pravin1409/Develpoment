#include<stdio.h>
int Count(char *str)
{
    int icnt=0;
    if (str==NULL)
    {
        return -1;
    }
    while (*str!='\0')
    {
        if ((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')
        ||(*str=='I')||(*str=='O')||(*str=='u'))
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
    int iRet=0;
    printf("Enter string: ");
    scanf("%[^'\n]s",Arr);
     iRet=Count(Arr);
     printf("number of vowel are:%d",iRet);
    return 0;
}