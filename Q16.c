/*Q16. Implement a C program to insert an element at the front, middle, or end of an array, and print
the array before and after insertion.
*/
#include <stdio.h>

int main() {
    int arr[100],n,position,value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nChoose insertion positionition:\n");
    printf("1. Front\n2. Middle\n3. End\nEnter your choice (1/2/3): ");
    scanf("%d", &position);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

     if (position == 1) {
        for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
        }
        arr[0] = value;
        n++;
    }
    else if (position == 2) {
    int mid = n / 2;
    for (int i = n; i > mid; i--) {
        arr[i] = arr[i - 1];
        }
        arr[mid] = value;
        n++;
    }
     else if (position == 3) {
        arr[n] = value;
        n++;
    } 
    else {
        printf("Invalid choice.\n");
        return 0;
    }

    printf("\nUpdated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}