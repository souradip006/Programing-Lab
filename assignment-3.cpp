#include <stdio.h>

int main() {
    int num1, num2, result;

    // Ask the user to enter two integers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Subtract num2 from num1
    result = num1 - num2;

    // Display the result
    printf("Result of %d - %d = %d\n", num1, num2, result);

    return 0;
}
