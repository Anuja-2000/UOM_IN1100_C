#include "stdio.h"

void main() {
    int n = 1, x;
    while (n < 21) {
        if (x % 5 == 0) {
            printf("%d\t\n", n);
            //printf("\n");
        } else {
            printf("%d\t", n);
        }
        x++;
        n++;
    }
}
