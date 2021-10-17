#include  "stdio.h"

int add(int,int);// function prototype

void main()
{
    int num1 = 10;
    int num2 = 20;
    int total;
    total = add(num1,num2);
    printf("Total = %d",total);
}

int add(int num1,int num2) // function header
{
    int total;
    total = num1 + num2;
    return total;
}

