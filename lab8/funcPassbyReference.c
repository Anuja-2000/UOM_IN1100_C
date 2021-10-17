#include "stdio.h"

void swap(int *no1, int *no2);

void main() {
    int x, y;
    printf("Enter no1:");
    scanf("%d", &x);
    printf("Enter no2:");
    scanf("%d", &y);

    swap(&x, &y);
    printf("Inside main no1=%d,no2=%d\n",x,y);
}

void swap(int *no1, int *no2) {
    int temp = *no1;
    *no1 = *no2;
    *no2 = temp;
    printf("Inside swap no1=%d,no2=%d\n",*no1,*no2);
}