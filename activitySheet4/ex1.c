#include "stdio.h"

void calDigits(int);

void main()
{
    int number;
    printf("Enter number:");
    scanf("%d",&number);

    calDigits(number);
}

void calDigits(int number)
{
    int count = 0;
    while(number != 0)
    {
        number = number / 10;
        count++;
    }
    printf("Number of digits = %d",count);
}