//Program izracunava proizvod brojeva koji se unose sa tastaure.
// Program zavrsava izracunavanje kad se unese nula.
#include "stdio.h"
main()
{
	float P = 1, x = 1;
	printf("Unesi brojeve. Izracunavanje se zavrsava unosom nule\n");
	do
	{
		scanf_s("%f", &x);
		if (x == 0)
			break;
		P *= x;
	}while (x);
	printf("Proizvod unesenih brojeva je P = %f\n", P);
}