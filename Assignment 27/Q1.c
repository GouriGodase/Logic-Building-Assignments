#include<stdio.h>

void StrCpyX(char *str, char *dest)
{
   while(*str != '\0')
   {
        *dest = *str;
        str++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char arr[20] = "Marvellous Multi OS";
    char brr[30];
   
    StrCpyX(arr,brr);

    printf("%s", brr);

    return 0;
}