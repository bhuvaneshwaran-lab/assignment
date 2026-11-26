/*Requirement:
1. Convert a given integer to its string representation.
2. Handle negative integers by including a '-' sign in the string.

Design:
1. Create a function `String(int num, char str[])` that takes an integer `num` and a character array `str` to store the string representation.
2. Handle the case where the number is zero by directly assigning '0' to the string

output:
Enter whole number: -12345
string: -12345
*/

#include <stdio.h>

void String(int num, char str[]) {
    int i = 0;
    int Neg = 0;

    if (num == 0) {
        str[0] = '0';
        str[1] = '\0';
        return;
    }

    if (num < 0) {
        Neg = 1;
        num = -num;
    }

    while (num > 0) {
        str[i] = '0' + (num % 10);
        num = num / 10;
        i++;
    }

    if (Neg) {
        str[i] = '-';
        i++;
    }
    str[i] = '\0';

    for (int left = 0, right = i - 1; left < right; left++, right--) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
    }
}

int main(void) {
    int number;
    char text[20];

    printf("Enter whole number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    String(number, text);
    printf("string: %s\n", text);
    return 0;
}