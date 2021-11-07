#include "stdio.h"

int main() {
    int sum = 0;
    int arr[3][3] = {{2, 3, 5},
                     {1, 8, 9},
                     {6, 7, 0}};
    for (int i = 0; i < 3; ++i) {
        sum = 0;
        for (int j = 0; j < 3; ++j) {
//            printf("%d\t",arr[i][j]);
            sum = sum + arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }
    return 0;
}