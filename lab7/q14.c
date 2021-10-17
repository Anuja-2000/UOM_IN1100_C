#include "stdio.h"

int main() {
    int num1, num2, max, lcm = 1;
    printf("Enter number1 and number2:");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2) {
        max = num1;
    } else {
        max = num2;
    }
    lcm = max;
    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }
        lcm = lcm + max;
    }

    printf("LCM is %d\n",lcm);
    return 0;
}