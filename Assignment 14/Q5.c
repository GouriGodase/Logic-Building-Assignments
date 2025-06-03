#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0; 
    int j = 0;
    int num = 0;

    for(i = 1; i <= iRow; i++ )
    {
        num = i;
        for(j = i; j <= iCol; j++)
        {
          
            
            printf("%d\t", num);
            num++;
            
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