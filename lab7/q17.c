#include "stdio.h"

int power(int, int);

int main() {
    int number, numberCopy1, numberCopy2, reverseNumber = 0, numberCopy3, length = 0, reverseNumberCopy1 = 0, numberCopy4;
    printf("Enter number:");
    scanf("%d", &number);

    numberCopy1 = number;
    numberCopy2 = number;
    numberCopy3 = number;

//    get the length of the number

    while (numberCopy3 != 0) {
        numberCopy3 = numberCopy3 / 10;
        length++;
    }

//    obtain the reversed number

    for (int i = 0; numberCopy2 != 0; i++) {
        numberCopy1 = numberCopy2 % 10;
        numberCopy2 = numberCopy2 / 10;
        reverseNumber = reverseNumber + numberCopy1 * power(10, length - 1);
        length--;

    }

//       get digit by digit and compare

    for (int j = 0; number != 0; j++) {
        numberCopy4 = number % 10;
        number = number / 10;
        reverseNumberCopy1 = reverseNumber % 10;
        reverseNumber = reverseNumber / 10;

        if (numberCopy4 != reverseNumberCopy1) {
            printf("Not a palindrome!");
            return 0;
        }
    }
    printf("Number is a palindrome!");
}

//      calculate the 10th powers

int power(int number, int power) {
    int answer = 1, x = 0;
    while (x < power) {
        answer = answer * number;
        x++;
    }
    return answer;
}