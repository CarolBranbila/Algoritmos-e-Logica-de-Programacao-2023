#include <stdio.h>

int main(void)
{
	int i;
	int n;
	float soma;
	float media;
	int quant;

	printf("Quantos elementos vai ter o vetor: ");
	scanf("%d", &n);

	int vet [n];
	soma = 0;
	quant = 0;

	for(i = 0; i < n ; i++)
	{
		printf("Digite um número: ");
		scanf("%d", &vet [i]);
		if(vet[i] % 2 == 0)
		{
			soma = soma + vet [i];
			quant++;
		}
	}
	if(soma > 0)
	{
		media = soma / quant;
		printf("MEDIA DOS PARES = %.1f", media);
	}
	else{
		printf("Nenhum número par");
	}

	return(0);

}
