#include<stdio.h>
//TimeComplexity = O(N)

int EvenFactorial(int iNo)
{   
    int iCnt = 0;
    int iFact = 1;


    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int  iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    printf("Even Factorial of Number is %d",iRet);

    return 0;
}