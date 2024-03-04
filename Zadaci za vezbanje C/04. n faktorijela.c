//Program za izracunavanje n!
#include "stdio.h"
main()
{
	int n, i,  f = 1;
	printf("Unesi ceo broj n\n");
	scanf_s("%d", &n);
	if (n > 0)
	{
		for (i = 0; i < n; i++)
			f *= (n - i);
		printf("n! = %d\n", f);
	}
	else
	{
		if (n == 0)
			printf("n! = %d\n", f);
		else
			printf("Za broj manji od nule n! nije definisano\n");
	}
}