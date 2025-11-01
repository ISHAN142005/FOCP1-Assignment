/*
Q4. Implement a C program to swap two numbers using four different methods, demonstrating
diverse approaches such as arithmetic, bitwise XOR, pointer manipulation, and temporary variable
usage — a key skill in memory and variable management.
*/

#include <stdio.h>

int main() {



//  Using Arithmetic

    int x, y, temp;
    printf("Enter first integers:");
    scanf("%d",&x);
    printf("Enter second integers:");
    scanf("%d",&y);

    printf("Before Swap: x = %d, y = %d\n", x, y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After Swap:  x = %d, y = %d\n", x, y);




//  Using Bitwise XOR

    printf("Enter first integers:");
    scanf("%d",&x);
    printf("Enter second integers:");
    scanf("%d",&y);

    printf("Before Swap: x = %d, y = %d\n", x, y);
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("After Swap:  x = %d, y = %d\n", x, y);




//   Using Pointers

    printf("Enter first integers:");
    scanf("%d",&x);
    printf("Enter second integers:");
    scanf("%d",&y);

 
    int *ptr1, *ptr2;
    ptr1 = &x;
    ptr2 = &y;

    printf("Before Swap:-\n");
    printf("x = %d, y = %d\n", x, y);

    temp = *ptr1;   
    *ptr1 = *ptr2; 
    *ptr2 = temp;  

    printf("After Swap:-\n");
    printf("x = %d, y = %d\n", x, y);
  
  

    
//   Using Temporary Variable

    printf("Enter first integers:");
    scanf("%d",&x);

    printf("Enter second integers:");
    scanf("%d",&y);

    
    printf("Before Swap: x = %d, y = %d\n", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("After Swap:  x = %d, y = %d\n", x, y);

    return 0;
}