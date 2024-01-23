#include <stdio.h>

int main (void)
{
	int n;
	int i;
	float soma;
	float media;

	printf("Quantos elementos vai ter o vetor ?");
	scanf("%d", &n);

	float vet [n];
	soma = 0;

	for(i = 0; i < n ; i++)
	{
		printf("Digite um numero : ");
		scanf("%f", &vet[i]);
		soma = soma + vet[i];
	}
	media = soma / n;
	printf("MEDIA DO VETOR: %.3f\n", media);

	printf("ELEMENTOS ABAIXO DA MÉDIA: ");
	for(i = 0; i < n; i++)
	{
		if(vet[i] < media)
		{

			printf("\n %.2f", vet[i]);
		}
	}
	return(0);

}
