//Program izracunava najveci zajednicki delitelj brojeva m i n (m>n)
#include "stdio.h"
main()
{
	int m, n, r, p;
	printf("Unesi dva cela broja\n");
	scanf_s("%d%d", &m, &n);
	if (m < n) 
		//Euklidov algoritam radi za m>n
		//U suprotnom promenljive m i n zamenjuju mesta
	{
		p = m;
		m = n;
		n = p;
	}
	r = m % n;
	while(r)
	{
		m = n;
		n = r;
		r = m % n;
	}
	printf("NZD = %d\n", n);
}