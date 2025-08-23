#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Input from user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Output result
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}
