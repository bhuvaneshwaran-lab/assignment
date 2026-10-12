
/*
Requirement:
1.Input is Accept any whole number (positive or negative) from the user.

2.Processing & Output: Determine if the number is divisible by 2 and display whether it is Even or Odd.

Design:
1.Prompt the user to enter a whole number and store it in an integer variable.

2.Check if the number is divisible by 2 using a conditional statement and operator logic.

3.Display the final output indicating whether the number is even or odd.

Output:
Enter a number positive or negative 4
Number 4 is Even.

Program:     */
#include <stdio.h>

int main() {
   
    int num;

   
    printf("Enter a number positive or negative ");
    
   
    scanf("%d", &num);

    
    if (num % 2 == 0) {
        printf("Number %d is Even.\n", num);
    } else {
        printf("Number %d is Odd.\n", num);
    }

    return 0;
}