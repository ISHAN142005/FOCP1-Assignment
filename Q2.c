/*
Q2. Construct a C program to find the HCF (Highest Common Factor) of two integers using
iterative or recursive logic — a core operation in optimisation algorithms and cryptographic
computations
*/
#include <stdio.h>

int main() {
    int num1,num2,HCF;
    
    printf("Enter first positive integers: ");
    scanf("%d", &num1);
    printf("Enter second positive integers: ");
    scanf("%d", &num2);

    
    for (int i = 1; i <= num1 && i <= num2; i++) {
        
        if (num1 % i == 0 && num2 % i == 0) {
            HCF = i; 
        }
    }

    printf("HCF of %d and %d is %d\n", num1, num2, HCF);

    return 0;
}