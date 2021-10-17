#include "stdio.h"

void Fibo(int terms);

int main() {
    int noOfTerms;
    printf("Enter number of terms:");
    scanf("%d", &noOfTerms);
    Fibo(noOfTerms);
    return 0;
}

void Fibo(int terms) {
    int fiboNo1 = 0, fiboNo2 = 1, fiboNo3 = 1;
    if(terms == 1){
        printf("0");
    } else {
        printf("0 1 ");
        for (int i = 0; i < terms - 2; i++) {
            fiboNo3 = fiboNo1 + fiboNo2;
            fiboNo1 = fiboNo2;
            fiboNo2 = fiboNo3;
            printf("%d ", fiboNo3);
        }
    }
}
