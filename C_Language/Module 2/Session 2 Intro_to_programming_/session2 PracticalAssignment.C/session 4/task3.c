#include <stdio.h>

// Function to check offer eligibility
int isEligibleForOffer(int age, float orderValue) {
    if (age >= 18 && orderValue > 500) {
        return 1;   // True
    } else {
        return 0;   // False
    }
}

main() {
    int age;
    float orderValue;

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Total Order Value: ");
    scanf("%f", &orderValue);

    if (isEligibleForOffer(age, orderValue)) {
        printf("Eligible for Offer\n");
    } else {
        printf("Not Eligible for Offer\n");
    }
}
