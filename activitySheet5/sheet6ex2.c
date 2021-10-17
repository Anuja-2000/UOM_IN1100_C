#include "stdio.h"

int main() {
    int n, *p;

    printf("Enter no of elements:");
    scanf("%d", &n);
    int arr[n];

    printf("Enter element\n");
    for (p = arr; p < arr + 5; p++) {
        scanf("%d", p);
    }

    printf("\nElements in reverse order\n");
    for (p = arr + 4; p >= arr; p--) {
        printf("%d ", *p);
    }

    return 0;
}