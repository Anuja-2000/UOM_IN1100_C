#include "stdio.h"

int main(){
    int x =1;
    mygotoPoint:
    printf("%d ",x);
    x++;
    if(x <=10){
        goto mygotoPoint;
    }
    return 0;
}