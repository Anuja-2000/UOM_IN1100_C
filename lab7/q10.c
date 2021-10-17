#include "stdio.h"

void main()
{
    int num,reverse = 0,remainder = 0;
    printf("Enter number:");
    scanf("%d",&num);

    while(num != 0){
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num  = num / 10;
    }

    printf("Reverse = %d\n",reverse);

}