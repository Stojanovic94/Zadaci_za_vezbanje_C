// Divisors of a number
#include "stdio.h"
#include "math.h"

int main()
{
    int i, n, a, r, d[50];

    // Input: Get a natural number from the user
    printf("Enter a natural number: ");
    scanf_s("%d", &n);

    // Calculate the square root of the input number
    a = floor(sqrt(n));

    // Output: Inform the user which number's divisors are being calculated
    printf("The divisors of %d are:\n", n);

    // Initialize the first divisor (1) and the last divisor (n) in the array
    d[0] = 1;           // 1 is always a divisor
    d[2 * a - 1] = n;   // n is also always a divisor

    // Ensure the number is positive before proceeding
    if (n > 0)
    {
        // Loop through numbers from 2 to sqrt(n)
        for (i = 2; i <= a - 1; i++)
        {
            // Calculate the remainder when n is divided by i
            r = n % i;

            // If i divides n with no remainder, i and n/i are divisors
            if (r == 0)
            {
                d[i - 1] = i;              // Store divisor i
                d[2 * a - i] = n / i;      // Store the paired divisor n/i
            }
            // If i is not a divisor, mark the index as 0
            else
            {
                d[i - 1] = 0;              // Mark non-divisors as 0
                d[2 * a - i] = 0;
            }
        }

        // Handle the case where the square root of n is an integer
        r = n % a;
        d[a - 1] = 0;   // Initialize middle elements to 0
        d[a] = 0;
        if (r == 0)
            d[a - 1] = a;  // If sqrt(n) is an exact divisor, include it
    }

    // Print the divisors stored in the array
    for (i = 0; i <= 2 * a - 1; i++)
    {
        if (d[i] != 0)   // Only print non-zero divisors
            printf("%d, ", d[i]);
    }

    // Newline after all divisors are printed
    printf("\n");
	
	    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
