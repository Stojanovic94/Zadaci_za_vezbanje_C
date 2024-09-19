// Program to calculate n!
#include "stdio.h"

int main()
{
    int n, i, f = 1;

    // Prompt the user to enter an integer
    printf("Enter an integer n\n");
    scanf_s("%d", &n);

    // Check if n is greater than 0
    if (n > 0)
    {
        // Calculate factorial for positive n
        for (i = 0; i < n; i++)
            f *= (n - i);

        // Print the factorial of n
        printf("n! = %d\n", f);
    }
    else
    {
        // Special case for n = 0
        if (n == 0)
            printf("n! = %d\n", f); // Factorial of 0 is 1
        else
            // Case for negative n
            printf("Factorial is not defined for negative numbers\n");
    }
	    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
