/*
Q5. Develop a C program to determine the quadrant in which a given coordinate point (x, y) lies on
the XY plane, illustrating the use of conditional statements and coordinate geometry logic relevant in
game development and robotics navigation.
*/

#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the x-coordinate: ");
    scanf("%d", &x);

    printf("Enter the y-coordinate: ");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("The point (%d, %d) lies in Quadrant I.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%d, %d) lies in Quadrant II.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%d, %d) lies in Quadrant III.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%d, %d) lies in Quadrant IV.\n", x, y);
    } else if (x == 0 && y == 0) {
        printf("The point (%d, %d) is at the Origin.\n", x, y);
    } else if (x == 0) {
        printf("The point (%d, %d) lies on the Y-axis.\n", x, y);
    } else if (y == 0) {
        printf("The point (%d, %d) lies on the X-axis.\n", x, y);
    }

    return 0;
}