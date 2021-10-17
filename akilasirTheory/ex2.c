#include "stdio.h"
//pass by reference
int add(int *x, int *y);

int main(){
    int a = 10,b=7;
    int x = add(&a,&b);
    printf("Answer is %d\n",x);
    return 0;
}

int add(int *x, int *y) {
    int ans = *x + *y;
    return ans;
}
