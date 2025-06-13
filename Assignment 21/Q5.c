#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void Digits(int Arr[], int iLength)
{
    int iCnt = 0, iCnt1 = 0, iNum = 0, iDigit = 0, iDigitCount = 0, iSum = 0; 

    for (iCnt = 0; iCnt < iLength; iCnt++) 
    {
        iNum = Arr[iCnt];
        iDigitCount = 0;

        if (iNum < 0)
        {
            iNum = -iNum;
        }

        while(iNum != 0)
        {
            iDigit = iNum % 10;
            iNum = iNum / 10;
            iSum = iSum +iDigit;
            iDigitCount++;
        }

        printf("%d ", iSum);      
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter Number of Elements:\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element  %d :", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    Digits(p, iSize);

    free(p);

    return 0;
}