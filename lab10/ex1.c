#include "stdio.h"

int main() {
    int n,max = 0;
    printf("Enter no of Integers:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    max = arr[0];
    for(int i = 0; i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    printf("Max value is: %d",max);
    return 0;
}