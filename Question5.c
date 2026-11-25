/*Requirement:

Check that the entered value is a positive integer
 (greater than 0). Handle non-positive or invalid inputs gracefully without crashing.

 Compute the sum of all proper divisors of the input integer 
 (positive divisors strictly less than the number itself).

 Design:
 Displays the prompt and reads number with scanf.

Validates that number is greater than 0.

Calls isPerfectNumber(number) and stores or evaluates the return value.

Output:
1. positive integer: 7
    7 is not Perfect Number.

2. positive integer: 6
    6 Perfect Number.    


*/ 
include <stdio.h>

int isPerfect(int n) {
    int sum = 0;
 for (int i = 1; i < n; i++) {
        if (n % i == 0) sum += i;
    }
 return sum == n; 
}

int main() {
int num;
 printf("positive integer: ");
    scanf("%d", &num);

 if (num > 0 && isPerfect(num)) {
     printf("%d Perfect Number.\n", num);
    } else {
    printf("%d is not Perfect Number.\n", num);
    }
    return 0;
}