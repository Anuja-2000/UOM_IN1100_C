#include <stdio.h>

void displayArray (int arr[][3], int row, int col);

int main(){
    int arr[4][3];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if(j == 0) {
                printf("Enter number %d:",i+1);
                scanf("%d", &arr[i][j]);
            } else{
                arr[i][j] = 0;
            }
        }
    }

    displayArray(arr,4,3);
    printf("\n\n");

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            if(j == 0){
                arr[i][j+1] = arr[i][j];
                arr[i][j] = 0;
            }
        }
    }
    displayArray(arr,4,3);
    return 0;
}

void displayArray (int arr[][3], int row, int col){
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}