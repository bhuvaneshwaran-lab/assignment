/*Requirements:
1. Implement a function to convert a decimal number to a specified base (between 2 and 16).
2.Ensure the target base is within the valid range of 2 to 16 inclusive; 
  reject out-of-range values with a clear error message.

Design:
1. Create a function `toBase(int n, int base, char out[])` that takes a decimal number `n`, a target base `base`, and an output character array `out` to store the result.
2. Use a character map to represent digits for bases greater than 10 (i.e.,

output:
Enter decimal number and base (2-16): 2 16
Result: 2

*/
#include <stdio.h>

void toBase(int n, int base, char out[]) {
    char map[] = "0123456789ABCDEF", rev[35];
    int i = 0, j = 0;

    if (n == 0) { out[0] = '0'; out[1] = '\0'; return; }

    while (n > 0) {
        rev[i++] = map[n % base]; 
        n /= base;
    }
    while (i > 0) out[j++] = rev[--i]; 
    out[j] = '\0';
}

int main() {
    int n, base;
    char out[35];
    printf("Enter decimal number and base (2-16): ");
    scanf("%d %d", &n, &base);

    if (n >= 0 && base >= 2 && base <= 16) {
        toBase(n, base, out);
        printf("Result: %s\n", out);
    } else {
        printf("Invalid input.\n");
    }
    return 0;
}