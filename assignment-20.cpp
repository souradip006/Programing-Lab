#include <stdio.h>

int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    if (num >= 0) {
        if ((int)num == num) {
            printf("%.2f is a whole number.\n", num);
        }
    }

    if (num < 0 || (int)num != num) {
        printf("%.2f is NOT a whole number.\n", num);
    }

    return 0;
}
