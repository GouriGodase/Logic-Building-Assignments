#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo; i++)
    {
        if(iNo % i == 0)
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int Value = 0;

    printf("Enter number\n");
    scanf("%d", &Value);

    DisplayFactor(Value);
    
    return 0;
}