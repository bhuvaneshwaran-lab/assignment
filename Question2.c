/*Requirements:

Prompt the user to enter an integer and capture the input.

Treat any number less than or equal to 1 as non-prime.

Check for divisors from 2 up to half the input value and display the final result.

Design:

Declare variables for the input (num), loop counter (i), and a status flag (is_prime = 1).

Use a for loop from 2 to num / 2 with the modulo operator (%) to test divisibility, breaking early if a factor is found.

Use if-else conditional statements to evaluate the status flag and print whether the number is prime.

output:
Enter a number: 6
6 is not a prime number.*/

#include <stdio.h>

int main() {
    int num, i;
    int is_prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        is_prime = 0;
    } else {
        
     for (i = 2; i <= num / 2; i++) {
     if (num % i == 0) {
     is_prime = 0; 
     break;       
     }
     }
     }


    if (is_prime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}