#include <stdio.h>

int main (void)
{
	int i;
	int n;
	float media;
	float maior;
	float menor;
	float soma;
	int quant1;
	int quant2;

	printf("Quantas pessoas serao digitadas? ");
	scanf("%d", &n);

	float altura[n];
	char genero [n];

	soma = 0;
	quant1 = 0;
	quant2 = 0;

	for(i = 0; i < n ; i++)
	{
		printf("Altura da %da pessoa: ", (i + 1));
		scanf("%f", &altura[i]);
		printf("Genero da %da pessoa: ", (i+1));
		scanf(" %c", &genero[i]);
	}
	maior = altura[0];
	menor = altura[0];
	for(i = 0; i < n; i++)
	{
		if(altura[i] > maior)
		{
			maior = altura[i];
		}
		else{
			if(altura[i]< menor)
			{
				menor = altura[i];
			}
		}
	}
	for(i=0; i<n ;i++)
	{
		if(genero[i] == 'F')
		{
			soma = soma + altura[i];
			quant1++;
		}
	}
	media = soma / quant1;

	for(i=0; i<n ;i++)
	{
		if(genero [i] == 'M')
		{
			quant2++;
		}
	}
	printf("Menor altura = %.2f\n", menor);
	printf("Maior altura = %.2f\n", maior);
	printf("Media das alturas das mulheres = %.2f\n", media);
	printf("Numero de homens = %d", quant2);

	return(0);

}
