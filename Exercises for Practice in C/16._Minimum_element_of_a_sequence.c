// Minimum element of a sequence
#include "stdio.h"

int main()
{
    int i, j, n;
    float a[50], min;

    // Input: The user enters the number of elements in the array
    printf("Enter the number of elements in the array n = ");
    scanf_s("%d", &n);

    // Input: The first element of the array is read
    printf("a[0] = ");
    scanf_s("%f", &a[0]);

    // Initialize the minimum value and its index
    min = a[0];
    j = 0;

    // Loop through the remaining elements to find the minimum
    for (i = 1; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf_s("%f", &a[i]);

        // If the current element is smaller than the current minimum, update the minimum
        if (min > a[i])
        {
            min = a[i];
            j = i;
        }
    }

    // Output the smallest element and its index
    printf("The smallest element in the array is a[%d] = %f\n", j, a[j]);

    return 0;
	
	    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
