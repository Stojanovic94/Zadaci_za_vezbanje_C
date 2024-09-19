// Product of two matrices
#include "stdio.h"

int main()
{
    int m1, n1, m2, n2, i, j, k;
    int a[10][10], b[10][10], c[10][10];

    // Input matrix dimensions
    printf("Matrices can be multiplied only if the number of columns in the first matrix equals the number of rows in the second matrix!\n");
    printf("Enter the number of rows for the first matrix: ");
    scanf_s("%d", &m1);
    printf("Enter the number of columns for the first matrix: ");
    scanf_s("%d", &n1);
    printf("Enter the number of rows for the second matrix: ");
    scanf_s("%d", &m2);
    printf("Enter the number of columns for the second matrix: ");
    scanf_s("%d", &n2);

    // Check if matrix multiplication is possible
    if (n1 == m2)
    {
        // Input elements of matrix A
        printf("Enter the elements of the first matrix (A):\n");
        for (i = 0; i < m1; i++)
        {
            for (j = 0; j < n1; j++)
            {
                printf("a[%d][%d] = ", i, j);
                scanf_s("%d", &a[i][j]);
            }
        }

        // Input elements of matrix B
        printf("Enter the elements of the second matrix (B):\n");
        for (i = 0; i < m2; i++)
        {
            for (j = 0; j < n2; j++)
            {
                printf("b[%d][%d] = ", i, j);
                scanf_s("%d", &b[i][j]);
            }
        }

        // Matrix multiplication
        printf("The result of multiplying matrices A and B is:\n");
        for (i = 0; i < m1; i++)
        {
            for (j = 0; j < n2; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < n1; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
                printf("%3d ", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrices cannot be multiplied because the number of columns in the first matrix does not equal the number of rows in the second matrix.\n");
    }

    return 0;
	
	    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
