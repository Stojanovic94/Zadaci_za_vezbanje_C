//Bubble sort
#include "stdio.h"

main()
{
	int n, i, ind;
	float a[50], p;
	printf("Unesi broj elemenenata niza n = ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%f", a + i);
	}
	do
	{
		ind = 0;
		for (i = 0; i < n - 1; i++)
			if (a[i] > a[i + 1])
			{
			p = a[i];
			a[i] = a[i + 1];
			a[i + 1] = p;
			ind = 1;
			}
	} while (ind);
	printf("Uredjeni niz:\n");
	for (i = 0; i < n; i++)
		printf("%2.2f\t", a[i]);
	printf("\n");
}