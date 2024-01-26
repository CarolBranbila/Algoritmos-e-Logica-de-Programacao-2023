#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int m;
	int n;
	int vet[100];

	printf("Qual a quantidade de linhas da matriz?");
	scanf("%d", &m);
	printf("Qual a quantidade de colunas da matriz? ");
	scanf("%d", &n);

	int mat [10][10];

	for(i = 0 ; i < m ; i++)
	{
		printf("Digite elementos da %da. linha:\n", (i + 1));
		for(j = 0; j < n; j++)
		{
			scanf("%d", &mat [i][j]);
		}
	}
	printf("VETOR GERADO:\n");

	for(i =0 ; i < m; i++)
	{
		int counter = 0;
		for(j = 0; j< n; j++)
		{
			counter = counter + mat[i][j];
		}
		vet[i]= counter;
		printf("%d\n",vet[i]);
	}

	return(0);
}
