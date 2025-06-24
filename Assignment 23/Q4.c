#include<stdio.h>
#define true 1
#define false 0

typedef int bool ;

bool ChkSpecial(char ch)
{
    if((ch >= '!') && (ch <= '/'))
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
 
    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not a special character");
    }

    return 0;
}