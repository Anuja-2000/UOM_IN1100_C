#include "stdio.h"

void main()
{
    int num1,num2,max,arr[100];
    printf("Enter number1 and number2:");
    scanf("%d %d",&num1,&num2);

    if(num1 > num2)
        max = num1;
    else
        max = num2;



    for (int i = 0; i < 10; ++i) {
        printf("%d\n",arr[i]);
    }
}