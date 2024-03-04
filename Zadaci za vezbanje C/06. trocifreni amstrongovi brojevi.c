#include "stdio.h"
#include "math.h"
void main()
{
	int i, s, d, j, a;
	for (i = 100; i <= 999; i++)
	{
		s = floor(i / 100);
		d = floor((i - s * 100) / 10);
		j = i - 100 * s - d * 10;
		a = pow(s, 3) + pow(d, 3) + pow(j, 3);
		if (i == a)
			printf("%d \n", i);
	}
	
	
}