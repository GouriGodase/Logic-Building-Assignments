#include<stdio.h>
//TimeComplexity = O(N)

void Display(int iNo)
{
    int icnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;

    }
    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf(" *\t");

    }
    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("#\t");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}