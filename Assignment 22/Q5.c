#include<stdio.h>


void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("your exam at 7AM");
    }
    else if((chDiv == 'B')||(chDiv == 'b'))
    {
        printf("your exam at 8.30 AM");
    }
    else if((chDiv == 'C')||(chDiv == 'c'))
    {
        printf("Your exam at 9.20 AM");
    }
    else if((chDiv == 'D')||(chDiv == 'd'))
    {
        printf("ypur exam at 10.30 AM");
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter your Division:");
    scanf("%c", &cValue);
 
    DisplaySchedule(cValue);

    return 0;
}