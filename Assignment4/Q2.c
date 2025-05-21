#include<stdio.h>

void  FactRev(int iNo)
{
    int iCnt = 0;
    for(iCnt = (iNo/2); iCnt >=1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number ");
    scanf("%d", &iValue);

    printf("Factors are :\n");
    FactRev(iValue);

    return 0;
}
