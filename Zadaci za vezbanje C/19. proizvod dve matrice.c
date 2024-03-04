//Proizvod dve matrice
#include "stdio.h"
main()
{
	int m1, n1, m2, n2, i, j, k, a[10][10],b[10][10],c[10][10];
	printf("Dve matrice mogu da se pomnoze samo ako je broj kolona u prvoj matrici jednak broju redova u drugoj matrici!\n");
	printf("unesi broj redova prve matrice\n");
	scanf_s("%d", &m1);
	printf("unesi broj kolona prve matrice\n");
	scanf_s("%d", &n1);
	printf("unesi broj redova druge matrice\n");
	scanf_s("%d", &m2);
	printf("unesi broj kolona druge matrice\n");
	scanf_s("%d", &n2);
	if (n1 == m2)
	{
		for (i = 0; i <= m1 - 1; i++)
		{
			for (j = 0; j <= n2 - 1; j++)
			{
				c[i][j] = 0;
				for (k = 0; k <= n1 - 1; k++)
					c[i][j] = c[i][j] + a[i][k] * b[k][j];
				printf("%3d", c[i][j]);
			}
			printf("\n");
		}
	}
	else
		printf("matrice se ne mogu pomnoziti!");
	
}