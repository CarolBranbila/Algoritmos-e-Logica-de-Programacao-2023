#include <stdio.h>

int main(void)
{
	int n;
	float maior;
	int i;
	int posicao;

	printf("Quantos numeros voce irá digitar ?");
	scanf("%d", &n);

	float numero [n];
	for(i = 0; i < n; i++)
	{
		printf("Digite um número : ");
		scanf("%f", &numero [i]);
	}
	maior = numero [0];

	for( i = 1; i < n; i++)
	{
		if(numero[i] > maior)
		{
			maior = numero[i];
			posicao = i;
		}
	}
	printf("\nMAIOR VALOR: %.2f\n", maior);
	printf("POSICAO DO MAIOR VALOR: %d", posicao);

	return(0);
}
