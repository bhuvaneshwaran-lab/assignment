/*Requirement

Display a clear message asking the user to enter a positive whole number.

Accept a single integer value from standard input (keyboard).

Display the original input number along with the final computed factorial.

Design:

Prompt the user and store their whole number in number, while initializing factorial = 1

Display a prompt message on the screen and use scanf to read the user's whole number into number.

Print a clear final sentence displaying both the original number and the computed factorial result.

output:
Enter a positive whole number: 8
The factorial of 8 is 40320
*/
#include <stdio.h>

int main() {
    int number;
    int factorial = 1;
    int i;

    printf("Enter a positive whole number: ");
    scanf("%d", &number);

   
    for (i = 1; i <= number; i = i + 1) {
        factorial = factorial * i;
    }

    printf("The factorial of %d is %d\n", number, factorial);

    return 0;
}