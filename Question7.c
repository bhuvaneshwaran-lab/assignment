/*Requirement: 
1.Count the frequency of each digit (0-9) in a given integer.

2.Display the frequency of each digit on standard output (stdout).

design:
1.Prompts for and reads an integer (num).
2.Invokes countDigits(num, freq) to populate the frequency array.
3.Prints the frequency of each digit from 0 to 9.

output:
1. type the integer: 123321

   Digit 0: 0
   Digit 1: 2
   Digit 2: 2
   Digit 3: 2
   Digit 4: 0
   Digit 5: 0
   Digit 6: 0
   Digit 7: 0
   Digit 8: 0
   Digit 9: 0

*/
#include <stdio.h>

void countDigit(int n,) {
    if (n < 0) n = -n; 
    if (n == 0) { freq[0]++; return; } 

    while (n > 0) {
        freq[n % 10]++; 
        n /= 10;        
    }
}

int main() {
    int num, freq[10] = {0}; 
    printf("type the integer: ");
    scanf("%d", &num);

    countDigits(num, freq); 

    for (int i = 0; i < 10; i++) {
        printf("Digit %d: %d\n", i,);
    }
    return 0;
}