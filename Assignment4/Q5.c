#include<stdio.h>

int   FactDiff(int iNo)
{
    int iCnt = 0;
     int iSumFact = 0;
     int iSumNon = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNon = iSumNon + iCnt;
        }

    }
    return iSumFact - iSumNon;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number ");
    scanf("%d", &iValue);

    printf("Factors are :\n");
    iRet = FactDiff(iValue);

   printf("%d",iRet);

    return 0;
}
