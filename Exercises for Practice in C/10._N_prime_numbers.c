// N prime numbers
#include "stdio.h"
#include "math.h"

int main()
{
    int n, i, j = 1, x = 2, a, r, ind;

    // Get the number of primes to print
    printf("Enter n = ");
    scanf_s("%d", &n);

    // Output message for the first n primes
    printf("The first %d prime numbers are:\n ", n);

    // Check if n is a valid natural number
    if (n >= 1)
    {
        // First prime number is 2, so print it first
        printf("2, ");
        x += 1;  // Move to the next odd number for prime checking
        
        // Loop until we find n prime numbers
        while (j < n)
        {
            ind = 1;  // Assume the number is prime
            a = floor(sqrt(x));  // Calculate square root of x to optimize prime checking
            
            // Check divisibility from 2 to sqrt(x)
            for (i = 2; i <= a; i++)
            {
                r = x % i;  // Calculate remainder
                if (r == 0) // If remainder is 0, x is not prime
                {
                    ind = 0;  // Set flag to false (not prime)
                    break;    // No need to check further
                }
            }
            
            // If ind is still 1, x is prime
            if (ind)
            {
                printf("%d, ", x);  // Print the prime number
                j += 1;  // Increment the prime count
            }

            x += 2;  // Skip even numbers, as they are not prime (except 2)
        }
    }
    else
        printf("You did not enter a natural number\n");  // Handle invalid input

    printf("\n");  // Newline after output
	
	    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
