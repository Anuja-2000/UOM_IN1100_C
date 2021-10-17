#include "stdio.h"
#include "math.h"

float width,height,area;

float calSquare();
float calRectangle();
float calTriangle();
float calCircle();

void main()
{
    char shape;
    printf("Enter the first letter of the shape:");
    scanf("%c",&shape);

    switch (shape) {
        case 's':
        case 'S':
            printf("Area of the Square = %0.2f",calSquare());
            break;
        case 'r':
        case 'R':
            printf("Area of the Rectangle = %0.2f",calRectangle());
            break;
        case 't':
        case 'T':
            printf("Area of the Triangle = %0.2f",calTriangle());
            break;
        case 'c':
        case 'C':
            printf("Area of the Circle = %0.2f",calCircle());
            break;
    }
}

float calSquare()
{
    printf("Enter width:");
    scanf("%f",&width);
    area = pow(width,2);
    return area;
}

float calRectangle()
{
    printf("Enter width height:");
    scanf("%f %f",&width,&height);
    area = width * height;
    return area;
}

float calTriangle()
{
    printf("Enter base and perpendicular height:");
    scanf("%f %f",&width,&height);
    area = 0.5 * width * height;
    return area;
}

float calCircle()
{
    printf("Enter radius:");
    scanf("%f",&width);
    area = M_PI * (pow(width,2));
    return area;
}