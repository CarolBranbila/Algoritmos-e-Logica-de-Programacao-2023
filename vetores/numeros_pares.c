#include <stdio.h>

int main(void)
{
	int n;
	int quant;
	int i;

	printf("Quantos numeros voce irá digitar ?");
	scanf("%d", &n);

	int numero [n];

	for(i = 0; i < n; i++)
	{
		printf("Digite um número : ");
		scanf("%d", &numero [i]);
	}
	printf("Números Pares: \n");
	quant = 0;

	for(i = 0; i < n; i++)
	{
		if(numero [i] % 2 == 0)
		{
			printf("%d ", numero[i]);
			quant++;
		}
	}

	printf("\nQuantidade de pares : %d", quant);

	return(0);

}
