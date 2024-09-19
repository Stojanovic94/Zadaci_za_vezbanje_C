// Program calculates the sum of numbers entered from the keyboard.
// The program stops summing when zero is entered.
#include "stdio.h"

int main()
{
    float S = 0, x;

    // Prompt the user to enter numbers and inform them that summing stops with zero
    printf("Enter numbers. Summing stops when zero is entered\n");

    // Loop to continuously read numbers and add them to the sum
    do
    {
        // Read a float number from the user
        scanf_s("%f", &x);

        // Add the entered number to the sum
        S += x;

    // Continue the loop as long as the entered number is not zero
    } while (x != 0);

    // Print the sum of the entered numbers
    printf("The sum of the entered numbers is S = %f\n", S);
	
	    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
	
}
