#include<stdio.h>

// time Complexity = O(1)

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;

    }
   if (iNo == 0)
    {
        printf("zero \n");
    }
    else if (iNo == 1)
    {
        printf("one\n");

    }
    else if (iNo == 2)
    {
        printf("Two \n");
    }
    else if(iNo == 3)
    {
        printf(" Three \n");
    }
    else if(iNo == 4)
    {
        printf(" Four\n");
    }
    else if(iNo == 5)
    {
        printf(" Five \n");
    }
    else if(iNo == 6)
    {
        printf(" Six \n");
    }
    else if(iNo == 7)
    {
        printf(" Seven \n");
    }
    else if(iNo == 8)
    {
        printf(" Eight \n");
    }
    else if(iNo == 9)
    {
        printf(" Nine \n");
    }
    else
    {
        printf(" Enter a valid single Digit Number\n");
    }
    


    
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}