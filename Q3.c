/*
Q3. Design a C program to subtract two integers without using the minus (-) operator, applying
bitwise operators. Highlight how such logic can be used in low-level arithmetic operations in
embedded systems or processors.
*/

#include <stdio.h>

int main() {
    int a, b, difference;

    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    difference = a + (~b + 1); 
    //THE ~ANY NUMBER=-ANY NUMBER

    printf("The difference of %d - %d is: %d\n", a, b, difference);

    return 0;
}