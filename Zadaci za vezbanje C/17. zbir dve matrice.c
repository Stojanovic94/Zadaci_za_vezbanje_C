//Zbir dve matrice
#include "stdio.h"

main()
{
	int a[10][10], b[10][10], m, n, i, j;
	printf(" unesi broj redova m = ");
	scanf_s("%d", &n);
	printf("\n unesi broj kolona n = ");
	scanf_s("%d", &m);
		printf("unesi elemente matrice A \n");
	for (i = 0; i <= n - 1; i++)
	{
		for (j = 0; j <= m - 1; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("unesi elemente matrice B \n");
	for (i = 0; i <= n - 1; i++)
	{
		for (j = 0; j <= m - 1; j++)
		{
			printf("b[%d][%d] = ", i, j);
			scanf_s("%d", &b[i][j]);
		}
	}
	printf("Zbir matrica A i B je \n");
	for (i = 0; i <= n - 1; i++)
	{
		for (j = 0; j <= m - 1; j++)
		{
			a[i][j] = a[i][j]+b[i][j];
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

}