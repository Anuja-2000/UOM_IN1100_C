#include <stdio.h>

void main()
{
    float num1,num2;
    char op;
    float answer;
    printf("Enter number 1 and number2:");
    scanf("%f %f",&num1,&num2);
    printf("Enter the operator:");
    getchar();
    scanf("%c",&op);

    switch(op)
    {
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
    printf("%0.2f %c %0.2f = %0.2f",num1,op,num2,answer);
}
