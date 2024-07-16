#include <stdio.h>
#include "calculator.h"

int main() {
    double a, b, result;
    char operation;

    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter an operator (+, -, *, /, ^, s (for sqrt), m (for modulus)): ");
    scanf(" %c", &operation);

    if (operation != 's') {
        printf("Enter second number: ");
        scanf("%lf", &b);
    }

    switch (operation) {
        case '+':
            result = add(a, b);
            break;
        case '-':
            result = subtract(a, b);
            break;
        case '*':
            result = multiply(a, b);
            break;
        case '/':
            result = divide(a, b);
            break;
        case '^':
            result = power(a, b);
            break;
        case 's':
            result = square_root(a);
            break;
        case 'm':
            result = modulus(a, b);
            break;
        default:
            printf("Invalid operation!\n");
            return 1;
    }

    printf("Result: %lf\n", result);
    return 0;
}
