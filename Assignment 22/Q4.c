#include<stdio.h>
#define true 1
#define false 0

typedef int bool;

bool ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z')) 
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character:");
    scanf("%c", &cValue);

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}