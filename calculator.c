#include <stdio.h>
int main() {
    char operator;
    double num1, num2;
    
    // Asking the user to enter the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    
    // Asking the user to enter two operands
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);
    
    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Error! operator is not correct\n");
    }

    return 0;
}

