//Program koji odredjuje maximum i minimum od tri unesena broja
#include "stdio.h"
main()
{
	float a, b, c, min, max;
	printf("Unesi tri broja \n");
	scanf_s("%f%f%f", &a, &b, &c);
	min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	
	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	printf("min = %f, max = %f \n", min, max);
}
