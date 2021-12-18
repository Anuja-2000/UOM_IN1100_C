#include <stdio.h>
#define swap(a, b) int temp;temp = a;a = b;b = temp;
int main(){
    int a = 10 ,b = 5;
    swap(a,b);
    printf("a = %d\nb = %d",a,b);
    return 0;
}