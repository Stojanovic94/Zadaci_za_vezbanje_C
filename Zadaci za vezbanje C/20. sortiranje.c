//Sortiranje metodom selekcije
#include "stdio.h"
main()
{
	int n, i, j, min, imin;
	float p, a[50];
	printf("unesi broj elemenata niza n = ");
	scanf_s("%d", &n);
	for (i = 0; i <= n - 1; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%f", &a[i]);
	}
	for (i = 0; i <= n - 2; i++)
	{
		imin = i;
		min = a[i];
		for (j = i + 1; j <= n - 1; j++)
		{
			if (min > a[j])
			{
				imin = j;
				min = a[j];
			}
		}
		p = a[i];
		a[i] = min;
		a[imin] = p;
	}
		printf("Niz je uredjen u rastucem redosledu\n");
		for (i = 0; i <= n - 1; i++)
			printf("%3.2f\t", a[i]);
}