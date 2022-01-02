#include<stdio.h>
int CountF(char*str,char ch)
{
    int icnt=0;
    if (str==NULL)
    {
        return -1;
    }
 while (*str!='\0')
    {
        if (*str==ch)
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
    char cValue;

    printf("Enter string: ");
    scanf("%[^'\n]s",Arr);

    printf("Enter chra:");
    scanf(" %c",&cValue);//  contain space Important.
     iRet=CountF(Arr,cValue);
     printf("number of vowel are:%d\n",iRet);
    return 0;

    return 0;
}