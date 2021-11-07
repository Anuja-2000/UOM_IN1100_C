#include "stdio.h"

int main() {
    int arr[3][3] = {{2, 3, 5},
                     {1, 8, 9},
                     {6, 7, 0}};
    int d1 = 0, d2 = 0;
    for (int i = 0; i < 3; ++i) {
        d1 += arr[i][i];
        d2 += arr[i][2-i];
    }
    printf("d1 = %d | d2 = %d", d1,d2);
    return 0;
}