// Four-digit Armstrong numbers
#include "stdio.h"
#include "math.h"

int main()
{
    int i, h, s, d, j, a;
    
    // Iterate over all four-digit numbers
    for (i = 1000; i <= 9999; i++)
    {
        // Extract digits
        h = i / 1000;          // Thousands place
        s = (i / 100) % 10;    // Hundreds place
        d = (i / 10) % 10;     // Tens place
        j = i % 10;            // Units place
        
        // Calculate Armstrong number
        a = pow(h, 4) + pow(s, 4) + pow(d, 4) + pow(j, 4);
        
        // Check if the number is an Armstrong number
        if (i == a)
            printf("%d\n", i);
    }

    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
