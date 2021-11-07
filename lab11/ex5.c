#include "stdio.h"

int main() {
    int arr1[2][2],arr2[2][2],sumArray[2][2];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("Enter value for 1st matrix row %d column %d :",i+1,j+1);
            scanf("%d",&arr1[i][j]);
            printf("Enter value for 2nd matrix row %d column %d :",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            sumArray[i][j] = arr1[i][j]+arr2[i][j];
        }
        printf("\n");
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d ",sumArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}