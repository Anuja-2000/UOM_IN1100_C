#include "stdio.h"

float findAvg(int arr[]);

int main(){
    int arr[]={10,15,23,45,14,25,56,89,45,12,36,57,48,15,24,58,69,15,47,100};
    float average = findAvg(arr);
    printf("Average is %0.2f",average);
    return 0;
}

float findAvg(int arr[]) {
    float sum = 0;
    for(int i=0;i<20;i++){
        sum = sum + arr[i];
    }
    return sum/20;
}
