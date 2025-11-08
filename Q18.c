/*Q18. Develop a program to identify and print duplicate elements in an array, or print “-1” if no
duplicates exist, applying frequency detection and data validation.
Examples:
Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
Output: 2 10 11
Input: {5, 40, 1, 40, 100000, 1, 5, 1}
Output: 5 40 1
*/
#include <stdio.h>

int main() {
    int arr[100], n,j;
    int duplicate[100] = {0}; 
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate elements:\n");
    for (int i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j] && duplicate[i] == 0) {
                printf("%d ", arr[i]);
                duplicate[i] = 1;
                found = 1;
                break; 
            }
        }
    }

    if (!found) {
        printf("-1");
    }

    printf("\n");
    return 0;
}