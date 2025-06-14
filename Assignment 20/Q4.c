#include <stdio.h>
#include <stdlib.h>

int Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    printf("Elements within range %d , %d are: \n", iStart, iEnd);
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
            printf("%d ", Arr[iCnt]);
        }
    }
    printf("\n");
}
int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0, iRet = 0;
    int *p = NULL;

    printf("Enter Number of Elements:\n");
    scanf("%d", &iSize);

    printf("Enter the Starting Point : \n");
    scanf("%d", &iValue1);

    printf("Enter the Ending Point : \n");
    scanf("%d", &iValue2);

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

    iRet = Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}