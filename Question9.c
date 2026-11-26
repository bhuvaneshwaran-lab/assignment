/*Requirements:
1. Implement a function to perform basic arithmetic operations (addition, subtraction, multiplication, division) on two double-precision floating-point numbers.
2. Handle the case where the second number is zero during division to prevent division by zero errors.
3. Use a pointer to an integer to indicate the validity of the operation result.

Design:
1. Create separate functions for each arithmetic operation.
2. Implement a main calculation function that uses a switch statement to call the appropriate operation function based on the operator provided.
3. Use a pointer to an integer to indicate whether the operation was successful.

output:
Enter first number: 10
Enter operator (+, -, *, /): /
Enter second number: 0
Error: Cannot divide by zero.

*/
#include <stdio.h>

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }

double divide(double a, double b) {
    if (b == 0.0) {
        printf("Error: Cannot divide by zero.\n");
        return 0.0;
    }
    return a / b;
}

double calculate(double a, double b, char op, int *valid) {
    *valid = 1;
    switch (op) {
        case '+': return add(a, b);
        case '-': return subtract(a, b);
        case '*': return multiply(a, b);
        case '/':
            if (b == 0.0) {
                *valid = 0;
                return divide(a, b);
            }
            return divide(a, b);
        default:
            *valid = 0;
            printf("Error: Invalid operator.\n");
            return 0.0;
    }
}

int main(void) {
    double a, b, ans;
    char op;
    int valid;

    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%lf", &b);

    ans = calculate(a, b, op, &valid);
    if (valid) {
        printf("Result: %.2f\n", ans);
    }

    return 0;
}