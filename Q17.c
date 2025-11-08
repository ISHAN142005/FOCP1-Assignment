/*Q17. Design a C program to delete an element from the front, middle, or end of an array, and print
the array before and after deletion.
*/
#include <stdio.h>

int main() {
    int arr[100], n, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nChoose deletion position:\n");
    printf("1. Front\n2. Middle\n3. End\nEnter your choice (1/2/3): ");
    scanf("%d", &choice);

    if (n == 0) {
        printf("Array is already empty.\n");
    } 
    else {
        if (choice == 1) {
            for (int i = 0; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
        } 
    else if (choice == 2) {
            int mid = n / 2;
            for (int i = mid; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
        } 
    else if (choice == 3) {
            n--;
        } 
    else {
            printf("Invalid choice.\n");
        }

    if (choice >= 1 && choice <= 3 && n >= 0) {
            printf("\nUpdated array:\n");
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
        }
    }

    printf("\n");
    return 0;
}