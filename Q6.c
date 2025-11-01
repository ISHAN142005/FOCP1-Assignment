/*
Q6. Create a C program that allows the user to convert between Binary and Decimal systems based
on their choice, showcasing understanding of data encoding and computer number systems used in
hardware-level design
*/
#include <stdio.h>

int main() {
    int choice;

    printf("Choose conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Binary to Decimal
        int binary, decimal = 0, base = 1, digit;

        printf("Enter a binary number: ");
        scanf("%d", &binary);

        while (binary > 0) {
            digit = binary % 10;
            decimal = decimal + digit * base;
            binary = binary / 10;
            base = base * 2;
        }

        printf("Decimal value = %d\n", decimal);

    } else if (choice == 2) {
        // Decimal to Binary
        int decimal, binary = 0, base = 1, remainder;

        printf("Enter a decimal number: ");
        scanf("%d", &decimal);

        while (decimal > 0) {
            remainder = decimal % 2;
            binary = binary + remainder * base;
            decimal = decimal / 2;
            base = base * 10;
        }

        printf("Binary value = %d\n", binary);

    } else {
        printf("Invalid entry.\n");
    }

    return 0;
}