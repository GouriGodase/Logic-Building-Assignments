#include<stdio.h>
void printEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int i = 0;
    for(i =2; i< iNo * 2; i +=2)
    {
        printf("%d\t",i);
    }
}
int main()
{
    int Value = 0;

    printf("Enter number \n");
    scanf("%d",&Value);

    printEven(Value);

    return 0;
}