#include "stdio.h"

double triangleArea(double num1, double num2);

int main() {
    double base, height, area;
    printf("Enter  base and height:");
    scanf("%lf %lf", &base, &height);

    area = triangleArea(base, height);
    printf("Answer = %0.2f", area);

    return 0;
}

double triangleArea(double num1, double num2) {
    return 0.5 * num1 * num2;
}