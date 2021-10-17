#include "stdio.h"

int main(){
    int r,c,matrix[10][10],transpose[10][10];

    printf("Enter rows and columns =");
    scanf("%d %d",&r,&c);

    printf("\nEnter values for the matrix\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }

    printf("Matrix\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transposed Matrix\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}