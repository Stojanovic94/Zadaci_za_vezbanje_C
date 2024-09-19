// Program to determine the maximum and minimum of three input numbers
#include "stdio.h"

int main()
{
    float a, b, c, min, max;

    // Prompt the user to enter three numbers
    printf("Enter three numbers \n");
    
    // Read three float numbers from user input
    scanf_s("%f%f%f", &a, &b, &c);

    // Assume the first number (a) is the minimum
    min = a;
    
    // Check if the second number (b) is smaller than the current minimum
    if (min > b)
        min = b;
    
    // Check if the third number (c) is smaller than the current minimum
    if (min > c)
        min = c;

    // Assume the first number (a) is the maximum
    max = a;
    
    // Check if the second number (b) is larger than the current maximum
    if (max < b)
        max = b;
    
    // Check if the third number (c) is larger than the current maximum
    if (max < c)
        max = c;

    // Print the minimum and maximum values
    printf("min = %f, max = %f \n", min, max);
	
    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
