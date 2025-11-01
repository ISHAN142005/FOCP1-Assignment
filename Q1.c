/*
Q1. Develop a C program to check whether a given number is an Armstrong number or not,
demonstrating understanding of number manipulation and digit-based computations used in digital
verification systems.
*/
#include <stdio.h>

int main() {
    int number, realnumber, lastdigit, result = 0;

    printf("Enter a number: ");
    scanf("%d", &number);
    realnumber = number;

    while (number != 0) {
    lastdigit = number % 10;           
    result = result + (lastdigit * lastdigit * lastdigit); 
    number = number / 10;              
    }
    
    if (result == realnumber) {
        printf("%d is an Armstrong number.\n", realnumber);
    } else {
        printf("%d is not an Armstrong number.\n", realnumber);
    }

    return 0;
}