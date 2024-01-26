#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int j;
	int soma = 0;
	int linha;
	int coluna;

	printf("Qual a ordem da matriz? ");
	scanf("%d", &n);

	int mat[10][10];
	//int matAlterada[10][10];

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
			if(mat [i][j] > 0)
			{
				soma = soma + mat[i][j];
			}
		}
	}
	printf("\nSOMA DOS POSITIVOS: %d\n", soma);

	printf("\nEscolha uma linha: ");
	scanf("%d",&linha);

	printf("\nLINHA ESCOLHIDA: ");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(i == linha)
			{
				printf("%d ", mat[i][j]);
			}
		}
	}
	printf("\nEscolha uma coluna: ");
	scanf("%d",&coluna);

	printf("\nCOLUNA ESCOLHIDA: ");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(j == coluna)
			{
				printf("%d ", mat[i][j]);
			}
		}
	}
	printf("\nDIAGONAL PRINCIPAL:");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(i == j)
			{
				printf("%d ", mat[i][j]);
			}
		}
	}
	printf("\nMATRIZ ALTERADA: \n");
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(mat[i][j] < 0)
			{
				mat[i][j] = mat[i][j] * mat[i][j];
			}
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	return(0);

}
