#include "stdio.h"

void main(){

    int arr[10];
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        printf("Enter number %d:",i+1);
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }

    printf("Total = %d",sum);
}