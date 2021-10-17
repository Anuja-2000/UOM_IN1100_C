#include "stdio.h"

const int N = 5, M = 10;

int main(){

    int arr1[N], arr2[N], arr[M],flag = 0,index = 0;

    printf("Enter %d values for array 1\n",N);
    for (int i = 0; i < N; i++) {
        scanf("%d",&arr1[i]);
    }
    printf("Enter %d values for array 2\n",N);
    for (int j = 0; j < N; j++) {
        scanf("%d",&arr2[j]);
        if (arr1[j] != arr2[j]){
            flag = 1;
        }
    }

    if(flag == 1){
        printf("Not same!\n");
    } else{
        printf("Same!\n");
    }

    for (int k = 0; k < N; k++) {
        arr[index++] = arr1[k];
    }

    for (int k = 0; k < N; k++) {
        arr[index++] = arr2[k];
    }

    for (int l = 0; l < M; ++l) {
        printf("%d ",arr[l]);
    }

    return 0;
}