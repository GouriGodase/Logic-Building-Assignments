#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0; 
    int j = 0;
    char ch = 'a';

    for(i = 1; i <= iRow; i++ )
    {
        for(j = 1, ch = 'a'; j <= iCol; j++, ch++)
        {
            if((i % 2) == 0) 
            {
                printf("%d\t", j);
            }
            else
            {
                printf("%c\t",ch);
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