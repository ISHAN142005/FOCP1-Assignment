/*Q11. Develop a C program to traverse an array of scores, determine whether each score is even or
odd using conditional logic, and store them into two separate arrays — even_array and odd_array.
*/
#include <stdio.h>

int main() {
    int scores[100], even_array[100], odd_array[100];
    int n,evencount = 0, oddcount = 0;

    printf("Enter number of scores: ");
    scanf("%d", &n);

    printf("Enter %d scores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < n; i++) {
        if (scores[i] % 2 == 0) {
            even_array[evencount] = scores[i];
            evencount++;
        } else {
            odd_array[oddcount] = scores[i];
            oddcount++;
        }
    }

    printf("\nEven scores:");
    for (int i = 0; i < evencount; i++) {
        printf("%d ", even_array[i]);
    }

    printf("\nOdd scores:");
    for (int i = 0; i < oddcount; i++) {
        printf("%d ", odd_array[i]);
    }

    printf("\n");
    return 0;
}