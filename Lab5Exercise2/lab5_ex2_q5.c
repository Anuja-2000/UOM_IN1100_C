#include <stdio.h>
#include <math.h>

void main(){
    char type;
    float radius,area,width,height,base;
    printf("Enter the Option (c/r/t):");
    scanf("%c",&type);

    switch (type) {
        case 'c':
            printf("Enter radius:");
            scanf("%f",&radius);
            area = M_PI * pow(radius,2);
            printf("Area of circle is %0.4f",area);
            break;
        case 'r':
            printf("Enter width and height:");
            scanf("%f %f",&width,&height);
            area = width * height;
            printf("Area of rectangle is %0.4f",area);
            break;
        case 't':
            printf("Enter base and height:");
            scanf("%f %f",&base,&height);
            area = base * height * 0.5;
            printf("Area of triangle is %0.4f",area);
            break;
        default:
            printf("Invalid input!");
    }
}

