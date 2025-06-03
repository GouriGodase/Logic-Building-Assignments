
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0; 
    int j = 0;
    int iCount = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(iCount == 10) iCount = 1;
            {
                printf("%d\t",iCount);
                iCount++;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of Rows:");
    scanf("%d", &iValue1);

    printf("Enter the number of Columns:");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

//Time Complexity is O(2N)