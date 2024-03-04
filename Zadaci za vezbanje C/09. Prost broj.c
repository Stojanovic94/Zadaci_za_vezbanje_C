//Program proverava da li je broj koji se prirodan i ako jeste da li je prost
#include "stdio.h"
#include "math.h"

main()
{
	int n, a, i, ind, r;
	do
	{
		ind = 1;
		printf("Unesi prirodan broj ili 0 za kraj ");
		scanf_s("%d", &n);
		a = floor(sqrt(n));
		if (n > 0)
		{
			for (i = 2; i <= a; i++)
			{
				r = n%i;
				if (r == 0)
				{
					ind = 0;
					break;
				}

			}
			if (ind)
				printf("%d je prost broj\n", n);
			else
				printf("%d nije prost broj\n", n);
		}
		else
		printf("Niste uneli prirodan broj!\n");
	} while (n != 0);
}