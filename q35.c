/*Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
*/
#include <stdio.h>

int findInsertPosition(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int mid;

    while (start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return start;
}

int main() {
    int numbers[] = {1, 3, 5, 6};
    int target = 2;
    int size = 4;

    int position = findInsertPosition(numbers, size, target);

    printf("Target should be at index: %d\n", position);

    return 0;
}