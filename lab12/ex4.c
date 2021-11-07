#include <stdio.h>

struct ComplexNumber {
    float real, imaginary;
};

int main() {
    float sumr, sumi;
    struct ComplexNumber cn1, cn2;
    printf("For 1st complex number\nEnter real and imaginary respectively:");
    scanf("%f %f", &cn1.real, &cn1.imaginary);
    printf("For 2nd complex number\nEnter real and imaginary respectively:");
    scanf("%f %f", &cn2.real, &cn2.imaginary);

    sumr = cn1.real + cn2.real;
    sumi = cn1.imaginary + cn2.imaginary;

    printf("Sum = %.1f + %.1fi", sumr, sumi);
    return 0;
}