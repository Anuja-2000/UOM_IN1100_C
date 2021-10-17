#include "stdio.h"

void main(){
    int number,x = 0;
    printf("Enter number:");
    scanf("%d",&number);

    while (number != 0){
        number = number / 10;
        x++;
    }

    printf("Number of digits in entered number = %d",x);
}