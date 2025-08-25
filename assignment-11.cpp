#include <stdio.h>
int main() {
    int number, lastDigit;
    printf("Enter an integer: ");
    scanf("%d", &number);
     lastDigit = number % 10;
    if (lastDigit < 0) {
        lastDigit = -lastDigit;
    }
    printf("The last digit of %d is %d\n", number, lastDigit);
    return 0;
}
