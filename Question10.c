/*Requirements:
1. Implement a function to convert a string representation of a number to an integer.
2. Handle strings containing only digits (0-9).
3. Ignore any leading or trailing whitespace.

Design:
1. Create a function `toInt(char s[])` that takes a string `s` and returns its integer value.
2. Iterate through the string, converting each digit to its numeric value and accumulating the result.
3. Return the final integer value.

Output:
Enter number string: 12345
Integer: 12345 (Plus 10: 12355)

*/
#include <stdio.h>

int toInt(char s[]) {
    int num = 0, i = 0;
    while (s[i] != '\0') {
        if (s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');
        }
        i++;
    }
    return num;
}

int main(void) {
    char s[100];
    printf("Enter number string: ");
    scanf("%99s", s);

    int n = toInt(s);
    printf("Integer: %d (Plus 10: %d)\n", n, n + 10);
    return 0;
}