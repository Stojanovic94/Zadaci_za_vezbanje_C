// Divisibility by 3
#include "stdio.h"
#include "math.h"

int main()
{
    int n, s = 0, x, a, r;

    // Input: Get a natural number from the user
    printf("Enter a natural number: ");
    scanf_s("%d", &n);

    // Ensure the number is positive before proceeding
    if (n > 0)
    {
        x = n;  // Assign the input number to a variable x

        // Loop to sum the digits of the number
        do
        {
            // Extract the last digit of the number
            a = x - floor(x / 10) * 10;  // Equivalent to x % 10
            s += a;                      // Add the digit to the sum
            x = floor(x / 10);           // Remove the last digit from the number
        } while (x);  // Continue until there are no more digits

        // Check if the sum of digits is divisible by 3
        r = s % 3;
        if (r)  // If the remainder is non-zero, the number is not divisible by 3
            printf("%d is not divisible by 3\n", n);
        else  // If the remainder is zero, the number is divisible by 3
            printf("%d is divisible by 3\n", n);
    }
    else
        printf("You did not enter a natural number\n");
	
	    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
