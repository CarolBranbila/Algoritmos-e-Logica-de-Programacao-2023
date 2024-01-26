#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int n;
	int maior;
	int vet[100];


	printf("Qual a ordem da matriz? ");
	scanf("%d", &n);

	int mat[10][10];

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("Elemento [%d"",""%d]:",i,j);
			scanf("%d", &mat[i][j]);
		}
	}
	printf("MAIOR ELEMENTO DE CADA LINHA:\n");

	for(i = 0; i < n; i++)
	{
		maior = mat [0][0];
		for(j = 0; j < n; j++)
		{
			if(mat[i][j] > maior)
			{
				maior = mat [i][j];
			}
		}
		vet[i]= maior;
		printf("%d\n",vet[i]);
	}

	return(0);
}
