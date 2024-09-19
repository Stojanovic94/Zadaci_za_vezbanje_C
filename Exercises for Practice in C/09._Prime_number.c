// Prime number
#include "stdio.h"
#include "math.h"

int main()
{
    int n, a, i, ind, r;

    // Loop to input numbers until the user enters 0
    do
    {
        ind = 1; // Set flag for prime checking to true (assume prime)
        printf("Enter a natural number or 0 to stop: ");
        scanf_s("%d", &n);

        a = floor(sqrt(n)); // Calculate the square root of the number for optimization

        if (n > 0) // Check if the number is natural (positive)
        {
            // Check divisibility from 2 to sqrt(n)
            for (i = 2; i <= a; i++)
            {
                r = n % i; // Check remainder when dividing n by i
                if (r == 0) // If remainder is 0, n is not prime
                {
                    ind = 0; // Set flag to false (not prime)
                    break;   // No need to check further
                }
            }

            // If the flag is still 1, the number is prime
            if (ind)
                printf("%d is a prime number\n", n);
            else
                printf("%d is not a prime number\n", n);
        }
        else if (n != 0) // If the number is negative or zero, it is not a natural number
        {
            printf("You didn't enter a natural number!\n");
        }
    } while (n != 0); // Continue until the user enters 0
	
	    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
