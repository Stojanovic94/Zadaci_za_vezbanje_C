// Program calculates the Greatest Common Divisor (GCD) of two numbers m and n (where m > n)
#include "stdio.h"

int main()
{
    int m, n, r, p;

    // Prompt the user for two integers
    printf("Enter two integers\n");
    scanf_s("%d%d", &m, &n);

    // Ensure m is greater than n; if not, swap them
    if (m < n) 
    {
        p = m;
        m = n;
        n = p;
    }

    // Apply the Euclidean algorithm to find the GCD
    r = m % n;
    while(r)
    {
        m = n;
        n = r;
        r = m % n;
    }

    // Print the result
    printf("GCD = %d\n", n);
	
	// Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
