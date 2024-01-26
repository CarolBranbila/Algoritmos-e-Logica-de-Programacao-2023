#include <stdio.h>

int main (void)
{
	int i;
	int j;
	int n;

	printf("Qual a ordem da matriz? ");
	scanf("%d", &n);

	int mat[10][10];
	int soma = 0;

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("Elemento [%d"",""%d]:",i,j);
			scanf("%d", &mat[i][j]);
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(i > j && i < (n-1))
			{
				soma = soma + mat[i][j];
			}
		}
	}
	printf("SOMA DOS ELEMENTOS ACIMA DA DIOAGONAL PRINCIAL = %d", soma);

	return(0);

}
