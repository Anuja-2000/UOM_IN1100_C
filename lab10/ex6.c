#include "stdio.h"

void sortArray(int numbers[]);

int const ARRAYSIZE = 6;

int main() {
    int arr[] = {25,12,45,63,85,22};
    sortArray(arr);
    return 0;
}

void sortArray(int numbers[]) {
    int max;
    for (int i = 0; i < ARRAYSIZE; i++) {
        max = 0;
        for (int j = i; j < (ARRAYSIZE); j++) {
            if (numbers[j] > max) {
                max = numbers[j];
            }
        }
        for (int k = 0; k < ARRAYSIZE; k++) {
            if (max == numbers[k]) {
                numbers[k] = numbers[i];
                numbers[i] = max;
            }
        }
    }

    for (int i = 0; i < ARRAYSIZE; i++) {
        printf("%d ", numbers[i]);
    }
}