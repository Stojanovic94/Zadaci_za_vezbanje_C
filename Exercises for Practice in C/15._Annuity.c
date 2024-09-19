// Annuity
// This program reads numbers from the user and multiplies each number to a running product until the user enters zero.
#include "stdio.h"
#include "math.h"

int main()
{
    int n;
    float a, k, p, r, i;

    // Prompt the user for the loan amount
    printf("Loan amount K = ");
    scanf_s("%f", &k);

    // Prompt the user for the number of installments
    printf("Number of installments n = ");
    scanf_s("%d", &n);

    // Prompt the user for the interest rate in decimal form
    printf("Interest rate in decimal form p = ");
    scanf_s("%f", &p);

    // Validate the input values
    if (n > 0 && k > 0 && p > 0 && p < 1) // ensure values are within correct ranges
    {
        // Calculate the monthly interest rate factor
        r = 1 + p / 12;

        // Calculate the annuity (monthly payment)
        a = k * ((r - 1) / (1 - pow(r, -n)));

        // Calculate the total interest paid
        i = n * a - k;

        // Print the annuity and the total interest
        printf("The annuity value is a = %f\n", a);
        printf("Total interest paid is I = %f\n", i);
    }
    else
    {
        // Print an error message if the input values are invalid
        printf("The entered values are not correct\n");
    }
	
	    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
