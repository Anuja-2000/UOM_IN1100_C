#include "stdio.h"

int fact(int);

int main(){
    int number;
    printf("Enter number:");
    scanf("%d",&number);
    printf("Factorial of %d is %d",number,fact(number));

    return 0;
}

int fact(int number){
    int factorial = 1;
    while (number > 0){
        factorial = factorial * number;
        number--;
    }

    return factorial;
}