#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char ch){
    if (ch == 'a'|| ch == 'e'||ch == 'i'||ch =='o'|| ch =='u')
    {
        return TRUE;

    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a character:");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("it is a vowel");
    }
    else
    {
        printf("it is not vowel");
    }
    
    return 0;
}
