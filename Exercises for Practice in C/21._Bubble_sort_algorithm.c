// Bubble sort algorithm
#include "stdio.h"

int main()
{
    int n, i, ind;
    float a[50], p;

    // Prompt the user to enter the number of elements in the array
    printf("Enter the number of elements in the array n = ");
    scanf_s("%d", &n);

    // Input elements into the array
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf_s("%f", a + i);
    }

    // Bubble sort algorithm
    do
    {
        ind = 0; // Initialize flag to check if any swapping is done
        for (i = 0; i < n - 1; i++)
            if (a[i] > a[i + 1])
            {
                // Swap elements if they are in the wrong order
                p = a[i];
                a[i] = a[i + 1];
                a[i + 1] = p;
                ind = 1; // Set flag to indicate a swap occurred
            }
    } while (ind); // Repeat until no swaps are made

    // Print the sorted array
    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%2.2f\t", a[i]);
    printf("\n");
	
    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
	
	    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
