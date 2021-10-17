#include "stdio.h"

float CelciTOFahren(float temperature);

int main() {

    float temperature,tempF;
    printf("Enter temperature in celsius:");
    scanf("%f", &temperature);

    tempF = CelciTOFahren(temperature);
    printf("%0.2f Celsius = %0.2f Fahrenheit",temperature,tempF);
    return 0;
}

float CelciTOFahren(float temperature) {
    return (temperature * 9) / 5 + 32;
}
