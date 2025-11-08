/*Q12. Develop a C program to find the maximum and minimum scores in an array, applying
comparative logic for ranking and analysis.
*/
#include <stdio.h>

int main() {
    int scores[100],n;
    int maximum, minimum;

    printf("Enter number of scores: ");
    scanf("%d", &n);

    printf("Enter %d scores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    maximum = scores[0];
    minimum = scores[0];

    for (int i = 1; i < n; i++) {
        if (scores[i] > maximum) {
            maximum = scores[i];
        }
        if (scores[i] < minimum) {
            minimum = scores[i];
        }
    }

    printf("maximumimum score = %d\n", maximum);
    printf("minimumimum score = %d\n", minimum);

    return 0;
}