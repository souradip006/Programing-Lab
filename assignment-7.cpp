#include <stdio.h>
int main() {
    float radius, area;

    // Input from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area
    area = 3.14 * radius * radius;

    // Output result
    printf("Area of the circle = %.2f\n", area);

    return 0;
}
