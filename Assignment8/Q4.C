#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dConvert = 0;
    dConvert = ((fTemp -32) *( 5.0 / 9.0));

    return dConvert;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter tempertaure in Faherenheit: \n");
    scanf("%d",&fValue);

    dRet = FhtoCs(fValue);

    printf("%f\n",dRet);

    return 0;
    
}