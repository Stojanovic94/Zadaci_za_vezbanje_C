// Quadratic equation
#include "stdio.h"
#include "math.h"

int main()
{
    char ind;
    float a, b, c, d, x, x1, x2;

    do
    {
        printf("Enter the coefficients of the quadratic equation (a, b, c):\n");
        scanf_s("%f%f%f", &a, &b, &c);

        // If the coefficient 'a' is zero, the equation is linear (bx + c = 0)
        if (a == 0)
        {
            if (b == 0)
                printf("The coefficients do not make sense.\n");
            else
            {
                x = -c / b;  // Solve the linear equation
                printf("The linear equation has one solution: x = %f\n", x);
            }
        }
        else  // If 'a' is not zero, it's a quadratic equation
        {
            d = b*b - 4 * a*c;  // Calculate the discriminant

            if (d > 0)  // Two real solutions exist
            {
                x1 = (-b + sqrt(d)) / (2 * a);  // First root
                x2 = (-b - sqrt(d)) / (2 * a);  // Second root
                printf("The equation has two solutions: x1 = %f, x2 = %f\n", x1, x2);
            }
            else if (d == 0)  // One real solution exists
            {
                x = -b / (2 * a);  // Single root
                printf("The equation has one solution: x = %f\n", x);
            }
            else  // No real solutions exist
            {
                printf("The equation has no real solutions.\n");
            }
        }

        printf("Enter '0' to stop, any other character to solve another equation:\n");
        scanf_s(" %c", &ind);  // Input character to check if user wants to stop
    } while (ind != '0');
	
	    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
