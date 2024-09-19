// Product of a matrix and a number
#include "stdio.h"

int main()
{
    int n, m, i, j;
    float k, a[10][10];

    // Input: Scalar multiplier k
    printf("Enter the scalar multiplier k = ");
    scanf_s("%f", &k);

    // Input: Matrix dimensions
    printf("Enter the number of rows in the matrix m = ");
    scanf_s("%d", &m);
    printf("Enter the number of columns in the matrix n = ");
    scanf_s("%d", &n);

    // Input: Matrix elements
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf_s("%f", &a[i][j]);
        }
    }

    // Matrix scalar multiplication
    printf("The resulting matrix after scalar multiplication is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] *= k;  // Multiply each element by k
            printf("%3.2f ", a[i][j]);  // Print the result
        }
        printf("\n");  // New line after printing each row
    }

    return 0;
	
	    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
