//Proizvod matrice i broja
#include "stdio.h"
main()
{
	int n, m, i, j;
	float k, a[10][10];
	printf("Unesi broj k = ");
	scanf_s("%f", &k);
	printf("Unesi broj redova matrice m = ");
	scanf_s("%d", &m);
	printf("Unesi broj kolona matrice n = ");
	scanf_s("%d", &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf_s("%f", &a[i][j]);
		}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			a[i][j] *= k;
			printf("%3.2f ", a[i][j]);
		}
		printf("\n");
		//nakon stampanja i-tog reda prelaz u novi red
	}

}