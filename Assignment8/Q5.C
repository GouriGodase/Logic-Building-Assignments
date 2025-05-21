#include<stdio.h>

double SquareMeter(int iValue)
{
    double dConvert = 1;
    dConvert = iValue * 0.0929;
    return dConvert;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet:\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%f\n",dRet);

    return 0;
    
}