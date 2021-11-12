#include <stdio.h>

int main(){
    int num1 = 0,num2 = 0;
    int *a ,*b;
    a = &num1;
    b = &num2;
    printf("Enter number 1:");
    scanf("%d",a);
    printf("Enter number 2:");
    scanf("%d",b);
    int mul = *a * *b;
    printf("Product = %d", mul);
    return 0;
}