#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int n;
	int negativo =0;


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
	printf("DIAGONAL PRINCIPAL:");
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
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(mat [i][j] < 0)
			{
				negativo++;
			}
		}
	}
printf("\nQUANTIDADE DE NEGATIVOS = %d", negativo);

return(0);

}
