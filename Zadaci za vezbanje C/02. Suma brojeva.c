//Program izracunava sumu brojeva koji se unose sa tastaure.
// Program zavrsava sumiranje kad se unese nula.
#include "stdio.h"
main()
{
	float S = 0, x;
	printf("Unesi brojeve. Sumiranje se zavrsava unosom nule\n");
	do
	{
		scanf_s("%f", &x);
		S += x;
	} while (x);
	printf("Suma unesenih brojeva je S = %f\n", S);
}