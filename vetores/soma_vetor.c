#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int number [9];
	int soma;
	int media;

	soma = 0;

	printf("Quantos números voce vai digitar ?");
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		printf("Digite um número: ");
		scanf("%d", &number[i]);
	}
	printf("VALORES = ");
	for(i = 0; i < n; i++)
	{
		printf(" %d", number[i]);
		soma = soma + number [i];
		media = soma / (i + 1);
	}
	printf("\nSOMA = %d", soma);
	printf("\nMEDIA = %d", media);

	return(0);

}
