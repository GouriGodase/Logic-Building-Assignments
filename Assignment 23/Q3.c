#include<stdio.h>

void Display(char ch)
{ 
    char iCnt = 0;

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t", iCnt );
        }
    }

    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c\t", iCnt);
        }          
    }
    else
    {
        return;
    }
    printf("\n");
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character:");
    scanf("%c", &cValue);
 
    Display(cValue);

    return 0;
}