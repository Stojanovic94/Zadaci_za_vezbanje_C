//Program izracunava srednju vrednost i standardnu devijaciju za n unesenih brojeva
#include "stdio.h"
#include "math.h"
main()
{
	int n, i;
	float x[20], A = 0;
	double S = 0; //Srednja vrednost je obelezena sa A, a standardna devijacija sa S
	printf("Unesi broj elemenata n = ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("x[%d] = ", i);
		scanf_s("%f", &x[i]);
		A += x[i];
	}
	A = A / n;
	for (i = 1; i <= n; i++)
		S += pow((x[i] - A), 2);
	S = sqrt(S / n);
	printf("Aritmeticka sredina je %f\n", A);
	printf("Standardna deviacija je %1f\n", S);
}