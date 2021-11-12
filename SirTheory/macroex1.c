#include "stdio.h"
#include "area.h"
#define SQUARE(x) (x*x)
#define CUBE(y) (y*y*y)

int main(){
//    int n;
    char shape;
    int l,h,b,r;
    printf("Enter the first letter of the shape :");
    scanf(" %c",&shape);

    switch (shape) {
        case 's':
        case 'S':
            printf("Enter length: ");
            scanf("%d",&l);
            printf("Area of the square = %d", SQUARE(l));
    }

    return 0;
}