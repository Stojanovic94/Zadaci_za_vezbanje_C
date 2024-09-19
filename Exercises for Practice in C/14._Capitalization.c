// Capitalization
#include "stdio.h"
#include "math.h"

int main()
{
    float t, g, m, d, k0, ks, p;
    int o, tm, td;

    // Input the initial capital amount
    printf("Enter initial capital (k0) = ");
    scanf_s("%f", &k0);

    // Input the interest rate in decimal format (e.g., 0.05 for 5%)
    printf("Enter the interest rate in decimal (p) = ");
    scanf_s("%f", &p);

    // Input the time period (years, months, days)
    printf("Time period for capitalization\n");
    printf("Years = ");
    scanf_s("%f", &g);
    printf("Months = ");
    scanf_s("%f", &m);
    printf("Days = ");
    scanf_s("%f", &d);

    // Input the number of compounding periods per year
    printf("Number of compounding periods per year (o) = ");
    scanf_s("%d", &o);

    // Convert the total time into days and years
    td = g * 365 + m * 30 + d;   // Total days
    t = g + m / 12 + d / 365;     // Total time in years

    // Calculate the number of full compounding periods
    tm = floor(t * o);   // Multiply time by compounding periods and floor it

    // Calculate the future capital after compounding
    ks = k0 * pow((1 + p / o), tm);   // Future capital for full periods

    // If there's a remaining fractional period, adjust for the extra days
    if (tm != t * o)	
    {
        td = td - tm * 365 / o;       // Remaining days in the fractional period
        ks = ks * (1 + p * td / 365); // Adjust for the partial period
    }

    // Output the result
    printf("Final capital (ks) = %f\n", ks);
	
	    // Wait for user input before closing
    printf("Press Enter to continue...");
    getchar();  // Consume newline character left by scanf_s
    getchar();  // Wait for the Enter key press

    return 0;
}
