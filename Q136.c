#include <stdio.h>

int findSingleNumber(int arr[], int size) {
    int i, j;
    int found;

    for (i = 0; i < size; i++) {
        found = 0;

        for (j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                found = 1;
                break;
            }
        }

        if (found == 0) {
            return arr[i];
        }
    }

    return -1;
}

int main() {
    int nums[] = {4, 1, 2, 1, 2};
    int size = 5;
    int single;

    single = findSingleNumber(nums, size);

    printf("The single number is: %d\n", single);

    return 0;
}