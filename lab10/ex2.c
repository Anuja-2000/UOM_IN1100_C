#include "stdio.h"

int main(){
    int arr[] = {56,5,23,41,43,10,78,29,9,4,36,82};
    int min = arr[0];

    for(int i = 0;i<12;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    printf("Minimum is %d",min);
    return 0;
}