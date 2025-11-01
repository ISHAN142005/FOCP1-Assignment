/*
Q8. Develop a C program to generate the Fibonacci series up to ‘n’ terms, where each term is the
sum of the two preceding ones.
0, 1, 1, 2, 3, 5, 8, 13, ...#include <stdio.h>
*/
#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    // Ask the user for number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", first);
        } else if (i == 2) {
            printf("%d ", second);
        } else {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }

    printf("\n");
    return 0;
}