//Minimalni element niza
#include "stdio.h"
main()
{
	int i, j, n;
	float a[50], min;
	printf("Unesi broj elemenata niza n = ");
	scanf_s("%d", &n);
	printf("a[0] = ");
	scanf_s("%f", &a[0]);
	min = a[0];
	j = 0;
	for (i = 1; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%f", &a[i]);
		if (min>a[i])
		{
			min = a[i];
			j = i;
		}
	}
	printf("Minimalni element niza je a[%d] = %f", j, a[j]);
}