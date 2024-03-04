//Anuitet
#include "stdio.h"
#include"math.h"
main()
{
	int n;
	float a, k, p, r, i;
	printf("Iznos kredita K = ");
	scanf_s("%f", &k);
	printf("Broj rata n = ");
	scanf_s("%d", &n);
	printf("Kamatna stopa u decimalnom zapisu p = ");
	scanf_s("%f", &p);
	if (n > 0 && k > 0 && p > 0 && p < 1)//ispitivanje da li su unesene vrednosti vece od 0
		//p mora da bude manje od 1 i vece od 0 kad se kamata unosi u decimalnom zapisu
	{
		r = 1 + p / 12;//podrazumava se da su anuiteti mesecni
		a = k*((r - 1) / (1 - pow(r, -n)));
		i = n*a - k;
		printf("Vrednost anuiteta je a = %f\n", a);
		printf("Ukupna kamata iznosi I = %f\n", i);
	}
	else
		printf("Uneseni vrednosti nisu korektne\n");
}