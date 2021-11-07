#include "stdio.h"

void sortArray(int arr[], int n);

int main() {
    int myArr[] = {8,47,5,87,4,59,88,94};
    sortArray(myArr,8);
    for (int i = 0; i < 8; ++i) {
        printf("%d ",myArr[i]);
    }
    return 0;
}

void sortArray(int arr[], int n) {
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n - y - 1; x++) {
            if (arr[x] < arr[x + 1]) {
                int temp = arr[x];
                arr[x] = arr[x + 1];
                arr[x + 1] = temp;
            }
        }
    }
}