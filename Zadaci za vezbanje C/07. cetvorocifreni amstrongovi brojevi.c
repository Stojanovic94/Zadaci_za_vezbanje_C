//Cetvorocifreni armstrongov broj
#include "stdio.h"
#include "math.h"
main()
{
	int i, h, s, d, j, a;
	for (i = 1000; i <= 9999; i++)
	{
		h = floor(i / 1000);
		s = floor((i - h * 1000) / 100);
		d = floor((i - h * 1000 - s * 100) / 10);
		j = i - h * 1000 - 100 * s - d * 10;
		a = pow(h, 4) + pow(s, 4) + pow(d, 4) + pow(j, 4);
		if (i == a)
			printf("%d \n", i);
	}
}