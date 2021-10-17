#include "stdio.h"

float num1 = 0, num2 = 0;
char op,tryAgain = 'y';
float answer = 0;

void main()
{
    while (tryAgain == 'y') {
        printf("Enter your statement(num1 operator num2):");
        scanf("%f %c %f", &num1, &op, &num2);

        switch (op) {
            case '+':
                answer = num1 + num2;
                break;
            case '-':
                answer = num1 - num2;
                break;
            case '*':
                answer = num1 * num2;
                break;
            case '/':
                answer = num1 / num2;
                break;
        }
        printf("Answer = %0.2f\n",answer);
        printf("Do you want to try it Again(y/n)?");
        getchar();
        scanf("%c", &tryAgain);
    }
}