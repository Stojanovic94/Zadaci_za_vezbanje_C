//Delici broja
#include "stdio.h"
#include "math.h"
main()
{
	int i, n, a, r, d[50];
	printf("Unesi prirodan broj ");
	scanf_s("%d", &n);
	a = floor(sqrt(n));
	printf("Delioci broja %d su:\n", n);
	d[0] = 1;//delioci broja n se smestaju u niz d[]
	d[2*a-1] = n;
	if (n > 0)
	{
		for (i = 2; i <= a-1; i++)
		{
			r = n%i;
			if (r == 0)
			{
				d[i - 1] = i;
				d[2*a-i] = n / i;
			}
			else
			{
				d[i - 1] = 0;
				d[2 * a - i] = 0;
			}
		}
		r = n%a;
		d[a - 1] = 0;
		d[a] = 0;
		if (r == 0)
			d[a - 1] = a;
	}
	for (i = 0; i <= 2 * a - 1; i++)
	{
		if (d[i] != 0)
			printf("%d, ", d[i]);
	}
	printf("\n");
}