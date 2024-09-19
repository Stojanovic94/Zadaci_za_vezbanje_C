// Program calculates the product of numbers entered from the keyboard.
// The calculation stops when zero is entered.
#include "stdio.h"

int main()
{
    float P = 1, x = 1;

    // Prompt the user to enter numbers and inform them that calculation stops with zero
    printf("Enter numbers. Calculation stops when zero is entered\n");

    // Loop to continuously read numbers and multiply them
    do
    {
        // Read a float number from the user
        scanf_s("%f", &x);

        // Check if the entered number is zero
        if (x == 0)
            break; // Exit the loop if zero is entered

        // Multiply the entered number with the product
        P *= x;

    // Continue the loop as long as the entered number is not zero
    } while (x);

    // Print the product of the entered numbers
    printf("The product of the entered numbers is P = %f\n", P);
	
	    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
