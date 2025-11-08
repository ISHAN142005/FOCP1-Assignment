/*Q10. Implement a program to find who and how many students scored “99” in the marks array,
emphasising data scanning and frequency counting.
*/
#include <stdio.h>

int main() {
    int marks[100], n,count = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    printf("Students who scored 99:\n");
    for (int i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("Student %d (index %d)\n", i + 1, i);
            count++;
        }
    }

    printf("\nTotal number of students who scored 99: %d\n", count);

    return 0;
}