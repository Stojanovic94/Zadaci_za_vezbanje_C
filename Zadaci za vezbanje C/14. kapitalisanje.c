//Kapitalisanje
#include "stdio.h"
#include "math.h"
void main()
{
	float t, g, m, d, k0, ks, p;
	int o, tm, td;
	printf("Pocetnu vrednost kapitala k0 = ");
	scanf_s("%f", &k0);
	printf("Dekurzivna kamatna stopa u decimalnom zapisu p = ");
	scanf_s("%f", &p);
	printf("Vreme kapitalisanja \n");
	printf("godine = ");
	scanf_s("%f", &g);
	printf("meseci = ");
	scanf_s("%f", &m);
	printf("dani = ");
	scanf_s("%f", &d);
	printf("broj obracunskih perioda godisnje = ");
	scanf_s("%d", &o);
	td = g * 365 + m * 30 + d;
	t = g + m / 12 + d / 365;
	tm = floor(t*o);
	ks = k0*pow((1 + p / o), tm);
	if (tm != t*o)	
	{td = td - tm * 365 / o;
	ks = ks*(1 + p*td / 365);		
	}
	printf("ks = %f \n", ks);
}
