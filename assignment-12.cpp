#include <stdio.h>
int main() {
    double principal, rate, time, amount, compoundInterest;
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);
    printf("Enter the time (in years): ");
    scanf("%lf", &time);
    amount = principal * ((1 + rate / 100), time);
    compoundInterest = amount - principal;
    printf("Compound Interest = %.2lf\n", compoundInterest);
    printf("Total Amount = %.2lf\n", amount);
    return 0;
}
