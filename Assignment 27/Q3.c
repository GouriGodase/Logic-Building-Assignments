#include<stdio.h>

void StrCpyCap(char *str, char *dest)
{
   while(*str != '\0') 
   {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *dest = *str; 
            dest++;
        }
        str++;
    }
    *dest = '\0';
}
int main()
{
    char arr[20] = "Marvellous Multi OS";
    char brr[30];
   
    StrCpyCap(arr,brr);

    printf("%s", brr);

    return 0;
}