// here is the code which is use of the switch statement and its role as a simple calculator:
// using switch, case, break
#include <stdio.h>
int main() {
    char operator;
    float num1, num2;
    
    // asking the user to enter the operator
    printf("Enter an operator (+, -, *, /, %): ");
    scanf("%c", &operator);
    
    // asking the user to enter two operands
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);
    
    switch (operator) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Error! operator is not correct\n");
    }
}
