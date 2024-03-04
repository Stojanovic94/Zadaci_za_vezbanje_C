//Program izdaje na ekranu prvih n prostih brojeva
#include "stdio.h"
#include "math.h"
main()
{
	int n, i, j = 1, x = 2, a, r, ind;
	printf("Unesi n = ");
	scanf_s("%d", &n);
	printf("Prvih %d prostih brojeva je:\n ", n);
	if (n >= 1)
	{
		printf("2, ");
		x += 1;		
		while (j < n)
		{
			ind = 1;
			a = floor(sqrt(x));
			for (i = 2; i <= a; i++)
			{
				r = x%i;
				if (r == 0)
				{
					ind = 0;
					break;
				}

			}
			if (ind)
			{
				printf("%d, ", x);
				j += 1;
			}
			x += 2;
		}
	}
	else	
		printf("Niste uneli prirodan broj \n");
	printf("\n");
}