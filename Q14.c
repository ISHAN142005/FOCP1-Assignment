/*Q14. Develop a C program to count the number of prime numbers in an array.
*/
#include <stdio.h>

int main() {
    int arr[100], n,primecount = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int prime = 1; 

        if (num <= 1) {
            prime = 0; 
        } else {
            for (int j = 2; j < num; j++) {
                if (num % j == 0) {
                    prime = 0; 
                    break;
                }
            }
        }

        if (prime == 1) {
            primecount++;
        }
    }

    printf("\nTotal prime numbers in the array: %d\n", primecount);

    return 0;
}