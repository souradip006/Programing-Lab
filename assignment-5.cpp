#include <stdio.h>

int main() {
    char ch;

    // Ask the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Display the ASCII value of the character
    printf("The ASCII value of '%c' is %d\n", ch, (int)ch);

    return 0;
}
