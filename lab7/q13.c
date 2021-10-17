#include "stdio.h"

void main() {
    int num1, num2, min, hcf = 1;
    printf("Enter number1 and number2:");
    scanf("%d %d", &num1, &num2);

//    min = num1<num2?num1
    if (num1 < num2) {
        min = num1;
    } else {
        min = num2;
    }

    int i = 1;
    while (i <= min) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
        i++;
    }

    printf("HCF is %d\n",hcf);
}