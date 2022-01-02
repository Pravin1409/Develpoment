#include<stdio.h>
#include<stdbool.h>
bool CheckPalindrom(char*str)
{
    char*start=NULL;
    char*end=NULL;
    bool flag=true;
    start=str;
    end=str;
    while (*end!='\0')
    {
        end++;
    }
    end--;
    
    while (start<end)
    {
        if (*start!=*end)
        {
            flag=false;
            break;
        }
        start++;
        end--;
        
    }
   return flag;
    
}
int main()
{
    char Arr[30];
    bool bRet=false;
    

    printf("Enter string: ");
    scanf("%[^'\n]s",Arr);

    bRet=CheckPalindrom(Arr);

    if (bRet==true)
    {
        printf("it is palindrom");
    }
    else
    {
        printf("it not palindrom");
    }

    return 0;
}