/*Requirement: 
1.Compute the Greatest Common Divisor (GCD) 
using a recursive function that repeatedly applies the Euclidean algorithm

2.Display the GCD of the two numbers on standard output (stdout).

design:
1.Prompts for and reads two integers (num1 and num2).

2.Checks that both inputs are positive (> 0).

3.Invokes gcd(num1, num2) and prints the returned GCD.

Output:
1. Enter 2 positive integers: 48 18
   GCD = 6


*/
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a; 
    return gcd(b, a % b); 
}

int main() {
    int a, b;
    printf("Enter 2 positive integers: ");
    scanf("%d %d", &a, &b);

    if (a > 0 && b > 0) {
        printf("GCD = %d\n", gcd(a, b));
    } else {
        printf("enter positive integers.\n");
    }
    return 0;
}