#include<stdio.h>
// TimeComplexity = O(N)
int DollarToINR(int iNo)
{
    int iMult;
    iMult = iNo * 70;
    return iMult;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number of USD");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("value in INR is %d",iRet);

    return 0;
}