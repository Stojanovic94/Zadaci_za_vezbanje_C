// Sorting
#include "stdio.h"

int main()
{
    int n, i, j, imin;
    float p, a[50];

    // Input: Number of elements in the array
    printf("Enter the number of elements in the array (n): ");
    scanf_s("%d", &n);

    // Input: Elements of the array
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf_s("%f", &a[i]);
    }

    // Selection sort algorithm
    for (i = 0; i < n - 1; i++)
    {
        imin = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[imin])
            {
                imin = j;
            }
        }

        // Swap the found minimum element with the first element
        if (imin != i)
        {
            p = a[i];
            a[i] = a[imin];
            a[imin] = p;
        }
    }

    // Output: Sorted array
    printf("The array is sorted in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%3.2f\t", a[i]);
    }
    printf("\n");

    return 0;
	
	    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
