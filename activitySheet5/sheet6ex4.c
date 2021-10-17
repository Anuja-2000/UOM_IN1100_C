#include "stdio.h"

int* findMid(int list[], int n);

int main(){
    int n;

    printf("Enter number of elements:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }

    int *midptr = findMid(arr,n);
    printf("%d",*midptr);
    return 0;
}

int* findMid(int list[], int n) {
    if(n%2 != 0){
        return &list[n/2];
    }
    return &n;
}
