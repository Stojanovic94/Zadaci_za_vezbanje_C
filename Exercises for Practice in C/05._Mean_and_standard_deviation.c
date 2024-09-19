// Program calculates the mean and standard deviation for n entered numbers
#include "stdio.h"
#include "math.h"

int main()
{
    int n, i;
    float x[20], A = 0;
    double S = 0; // Mean is marked as A, and standard deviation as S

    // Prompt the user for the number of elements
    printf("Enter the number of elements n = ");
    scanf_s("%d", &n);

    // Input elements and calculate the mean
    for (i = 1; i <= n; i++)
    {
        printf("x[%d] = ", i);
        scanf_s("%f", &x[i]);
        A += x[i];
    }

    A = A / n; // Calculate the mean

    // Calculate the standard deviation
    for (i = 1; i <= n; i++)
        S += pow((x[i] - A), 2);

    S = sqrt(S / n); // Compute the standard deviation

    // Print the results
    printf("The mean is %f\n", A);
    printf("The standard deviation is %1f\n", S);
	
	    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
