#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int n;
	int m;

	printf("Qual a quantidade de linhas da matriz?");
	scanf("%d", &m);
	printf("Qual a quantidade de colunas da matriz? ");
	scanf("%d", &n);

	int matA [10][10];
	int matB [10][10];
	int matsoma[10][10];

	printf("Digite os valores da matriz A :\n");
	for(i = 0 ; i < m ; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("Elemento [%d"",""%d]:",i,j);
			scanf("%d", &matA[i][j]);
		}
	}
	printf("Digite os valores da matriz B :\n");
	for(i = 0 ; i < m ; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("Elemento [%d"",""%d]:",i,j);
			scanf("%d", &matB[i][j]);
		}
	}
	printf("MATRIZ SOMA: \n");
	for(i = 0 ; i < m ; i++)
	{
		for(j = 0; j < n; j++)
		{
			matsoma[i][j] = matA[i][j] +matB[i][j];
			printf("%d ", matsoma[i][j]);
		}
		printf("\n");
	}
	return(0);
}
