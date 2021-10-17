#include "stdio.h"

void main() {
    int num, min, max, pint = 0, nint = 0, mul3 = 0, psum = 0, nsum = 0;
    printf("Enter a number (0 for terminate):");
    scanf("%d", &num);

    min = max = num;
    do {
        if (num == 0) {

            break;
        }
        if (num > 0) {
            pint++;
            psum = psum + num;
        } else {
            nint++;
            nsum = nsum + num;
        }

        if (num % 3 == 0) {
            mul3++;
        }
        if (num < min) {
            min = num;
        }

        if (num > max) {
            max = num;
        }
        printf("Enter a number (0 for terminate):");
        scanf("%d", &num);
    } while (1);

    printf("Number of positive Integers: %d\n",pint);
    printf("Number of negative Integers: %d\n",nint);
    printf("Sum of positive Integers: %d\n",psum);
    printf("Sum of negative Integers: %d\n",nsum);
    printf("Number of multipliers of 3: %d\n",mul3);
    printf("Maximum value: %d\n",max);
    printf("Minimum value: %d\n",min);
}