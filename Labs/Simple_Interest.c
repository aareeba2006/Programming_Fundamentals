#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    printf("Enter Principal amount (between 100 and 1000000 Rs): ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest (between 5 and 10 percent): ");
    scanf("%f", &rate);
    printf("Enter Time period (between 1 and 10 years): ");
    scanf("%f", &time);

    if (principal < 100 || principal > 1000000) {
        printf(" Invalid Principal!\n");
        return 0;
    }

    if (rate < 5 || rate > 10) {
        printf(" Invalid Rate!\n");
        return 0;
    }

    if (time < 1 || time > 10) {
        printf(" Invalid Time!\n");
        return 0;
    }

    // If all inputs are valid, calculate Simple Interest
    interest = (principal * rate * time) / 100;

    printf("\n Principal: %.2f Rs", principal);
    printf("\n Rate: %.2f %%", rate);
    printf("\n Time: %.2f years", time);
    printf("\n Simple Interest = %.2f Rs\n", interest);

    return 0;
}