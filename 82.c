#include<stdio.h>
#include<stdbool.h>
bool CheckPalindrom(char*str)
{
    char*start=NULL;
    char*end=NULL;
    // start=str;
    end=str;
    while (*end!='\0')
    {
        end++;
    }
    end--;
    
    while (str<end)
    {
        if (*str!=*end)
        {
            break;
        }
        start++;
        end--;
        
    }
    if (str<end)
    {
        return false;
    }
    else
    {
        return true;
    }
    
    
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