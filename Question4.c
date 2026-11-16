/*Requirement
Display a clear prompt asking the user to enter the desired number of terms (n).

Read and store the integer n from standard input (keyboard).

n terms of the Fibonacci series separated by spaces on the screen.

Design
Variable Setup: Declare n, i, t1 = 0, t2 = 1, and nextTerm.

User Input: Prompt the user and read the term count into n using scanf.

Header Output: Print the label "Fibonacci Series: " before starting the loop.

Output:
Enter the number of terms: 6
The value is: 0 1 1 2 3 5 
*/
#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, nextTerm;

 printf("Enter the number of terms: ");
 scanf("%d", &n);

printf("The value is: ");

 for (i = 1; i <= n; i = i + 1) {
 printf("%d ", t1);       
 nextTerm = t1 + t2;      
t1 = t2;                 
 t2 = nextTerm;           
 }

return 0;
}