/*
Q13. Design a C program to find a peak element that is not smaller than its neighbours.
*/
#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
for (int i = 0; i < n; i++) {
       if (i == 0) {
        if (arr[i] >= arr[i + 1]) {
            printf("Peak element found: %d at index %d\n", arr[i], i);
            break;
        }
    }
      else if (i == n - 1) {
        if (arr[i] >= arr[i - 1]) {
            printf("Peak element found: %d at index %d\n", arr[i], i);
            break;
        }
    }
     else {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            printf("Peak element found: %d at index %d\n", arr[i], i);
            break;
        }
    }
}

    return 0;
}