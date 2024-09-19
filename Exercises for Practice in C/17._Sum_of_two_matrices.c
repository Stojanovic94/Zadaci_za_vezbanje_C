// Sum of two matrices
#include "stdio.h"

int main()
{
    int a[10][10], b[10][10], m, n, i, j;

    // Input: Number of rows and columns
    printf("Enter the number of rows m = ");
    scanf_s("%d", &n);
    printf("\nEnter the number of columns n = ");
    scanf_s("%d", &m);

    // Input: Elements of matrix A
    printf("Enter the elements of matrix A \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf_s("%d", &a[i][j]);
        }
    }

    // Input: Elements of matrix B
    printf("Enter the elements of matrix B \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf_s("%d", &b[i][j]);
        }
    }

    // Matrix Addition: A + B
    printf("The sum of matrices A and B is \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            a[i][j] = a[i][j] + b[i][j];
            printf("%3d", a[i][j]);  // Display the result
        }
        printf("\n");
    }

    return 0;
	
	    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
