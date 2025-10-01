#include <stdio.h>

int main()
 {
    int age; 
    double income;
    // Ask for age
    printf("Enter your age: ");
    scanf("%d", &age);
    // Ask for income
    printf("Enter your annual income (in KES): ");
    scanf("%lf", &income);
    // Check eligibility
    if (age >= 21 && income >= 21000) 
        printf("Congratulations, you qualify for a loan.\n");
    else 
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    return 0;
}