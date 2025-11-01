//Q7. Develop a C program to print a binary pyramid pattern.
// 0        0
// 01      01
// 010    010
// 0101  0101
// 0101001010

#include <stdio.h>

int main() {
    int rows; 
    rows=5;

    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
      
        for (int j = 1; j <= i; j++) {
            printf("%d", j % 2 == 0 ? 1 : 0);  //USED TERNARY OPERATOR , STUDIED ONLINE
        }

        if (i != rows) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%d", j % 2 == 0 ? 1 : 0);  
        }

        printf("\n");
    }

    return 0;
}
