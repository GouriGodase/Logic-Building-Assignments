#include<stdio.h>

int KMtoMeter(int iNo)
{

    
        int iConvert = 1;
        iConvert = iNo * 1000;

        return iConvert;

    
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance :\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d KM = %d Meter", iValue, iRet);

    return 0;
    

}