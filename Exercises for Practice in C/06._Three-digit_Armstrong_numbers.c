// Three-digit Armstrong numbers
#include "stdio.h"
#include "math.h"

int main()
{
    int i, s, d, j, a;

    // Loop through all three-digit numbers
    for (i = 100; i <= 999; i++)
    {
        // Extract the hundreds digit
        s = floor(i / 100);

        // Extract the tens digit
        d = floor((i - s * 100) / 10);

        // Extract the units digit
        j = i - 100 * s - d * 10;

        // Calculate the sum of the cubes of the digits
        a = pow(s, 3) + pow(d, 3) + pow(j, 3);

        // Check if the number is an Armstrong number
        if (i == a)
            printf("%d \n", i);
    }
	    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
