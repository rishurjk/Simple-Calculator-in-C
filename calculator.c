// here is the code demonstrate the use of the switch statement and its role as a simple calculator
// using switch, case, break
#include <stdio.h>
int main(){
    char operator;
    float num1, num2, result;
    
    // asking the user to enter the operator
    printf("Enter an operator (+, -, *, /, %): ");
    scanf("%c", &operator);
    // asking the user to enter two operands
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);
    
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero is.\n");
            }
            break;
        default:
            printf("Error! Invalid operator\n");
    }
    printf("Result: %.2f %c %.2f = %.2f\n", num1, operator, num2, result);
}
