#include<stdio.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
           *str = *str - 32;
        }
        str++;
    } 
}
int main()
{
    char arr[20];

    printf("Enter string:");
    scanf("%[^'\n]s",arr);

    struprx(arr);

    printf("Modifiedn string is :%s\n", arr);

    return 0;
}