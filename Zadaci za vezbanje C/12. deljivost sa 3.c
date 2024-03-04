//Deljivost sa 3
#include "stdio.h"
#include "math.h"
main()
{
	int n, s = 0, x, a, r;
	printf("Unesi prirodan broj ");
	scanf_s("%d", &n);
	if (n > 0)
	{
		x = n;
		do
		{
			a = x - floor(x / 10) * 10;
			s += a;
			x = floor(x / 10);
		} while (x);
		r = s % 3;
		if (r)
			printf("%d nije deljiv sa 3\n", n);
		else
			printf("%d je deliiv sa 3\n", n);
	}
	else
		printf("Niste uneli prirodan broj\n");
}