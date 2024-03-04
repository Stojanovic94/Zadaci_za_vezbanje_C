//Kvadratna jendacina
#include "stdio.h"
#include "math.h"

void main()
{
	char ind;
	float a, b, c, d, x, x1, x2;
	do
	{
		printf("Unesi koeficijente kvadratne jednacine\n");
		scanf_s("%f%f%f", &a, &b, &c);
		if (a == 0)
		{
			if (b == 0)
				printf("Koeficijenti nemaju smisla\n");
			else
			{
				x = -c / b;
				printf("Linearna jednacina ima jedno resenje x=%f\n", x);
			} //kraj if(b=0)
		}
		else
		{
			d = b*b - 4 * a*c;
			if (d > 0)
			{
				x1 = (-b + sqrt(d)) / 2 * a;
				x2 = (-b - sqrt(d)) / 2 * a;
				printf("Jednacina ima dva resenja x1=%f, x2=%f\n", x1, x2);
			}
			else
			{
				if (d == 0)
				{
					x = -b / 2 * a;
					printf("Jednacina ima jedno resenje x=%f", x);
				}
				else
					printf("Jednacina nema realnih resenja\n"); //kraj if (d=0)
			}//kraj if (d>0)
		}//kraj if (a=0)
		printf("Unesi 0 za kraj \n");
		scanf_s(" %c", &ind);
	} while (ind != '0');
}