#include "stdio.h"

int i;

void checkSum(int a[5], int b[5]);

void average(int a[5], int b[5]);

int main() {
    int arr1[5], arr2[5];

    printf("Enter values for array1:");
    for (i = 0; i < 5; ++i) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter values for array2:");
    for (i = 0; i < 5; ++i) {
        scanf("%d", &arr2[i]);
    }

    checkSum(arr1, arr2);
    average(arr1, arr2);

    return 0;
}

void average(int a[5], int b[5]) {
    float arr[5];
    for (i = 0; i < 5; i++) {
        arr[i] = (a[i] + b[i]) / 2;
    }

    for(i = 0;i<5;i++){
        printf("%f",arr[i]);
    }
}

void checkSum(int a[5], int b[5]) {
    int sumA = 0, sumB = 0;
    for (i = 0; i < 5; i++) {
        sumA = sumA + a[i];
        sumB = sumB + b[i];
    }

    if (sumA > sumB) {
        printf("Array1 sum is greater than Array2 sum");
    } else if (sumA == sumB) {
        printf("Array1 sum is equal to Array2 sum");
    } else {
        printf("Array2 sum is greater than Array1 sum");
    }
}
