
#include <stdio.h>
int main() {
    double number, floorValue, ceilValue;
    printf("Enter a number (positive or negative): ");
    scanf("%lf", &number);
    floorValue = (number);
    ceilValue = (number);
    printf("Floor value of %.2lf = %.0lf\n", number, floorValue);
    printf("Ceiling value of %.2lf = %.0lf\n", number, ceilValue);
    return 0;
}
