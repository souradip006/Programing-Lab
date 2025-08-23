#include <stdio.h>

int main() {
    int choice;
    float celsius, fahrenheit;

    // Menu for user
    printf("Temperature Converter\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Fahrenheit to Celsius
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f°C\n", celsius);
    } else if (choice == 2) {
        // Celsius to Fahrenheit
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
    } else {
        printf("Invalid choice. Please run the program again and choose 1 or 2.\n");
    }

    return 0;
}
