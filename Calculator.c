#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    printf("=============================\n");
    printf("   Simple Calculator in C   \n");
    printf("   Made by Mohammed Ali     \n");
    printf("=============================\n\n");

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("\nResult: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("\nResult: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("\nResult: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;

        case '/':
            if(num2 == 0) {
                printf("\nError! Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("\nResult: %.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;

        default:
            printf("\nInvalid operator! Please use +, -, *, /\n");
    }

    return 0;
}