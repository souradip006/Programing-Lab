#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Before swap
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap using third variable
    temp = a;
    a = b;
    b = temp;

    // After swap
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
