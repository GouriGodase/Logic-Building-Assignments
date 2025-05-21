#include<stdio.h>

void DisplayConvert(char CValue) {
    if (CValue >= 'A' && CValue <= 'Z') {
        CValue = CValue +('a' - 'A');
    }
    else if (CValue >= 'a' && CValue <='z'){
        CValue =CValue -('a' - 'A');
    }
    printf("Changed character: %c\n",CValue);

}
int main()
{
    char cValue = '\0';

    printf("Enter a character:");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}