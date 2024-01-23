#include <stdio.h>

int main (void)
{
	int n;
	int i;
	int idade [500];
	float altura [500];
	float alturaMedia;
	float somaAltura;
	float quanti;
	float percentual;

	printf("Quantas pessoas serão digitadas ?");
	scanf("%d", &n);

	char nome [n][500];

	somaAltura = 0;
	quanti = 0;
	for(i = 0; i < n; i++)
	{
		printf("\nDados da %da pessoa: \n", (i + 1));
		printf("Nome:");
		scanf("%s", &nome[i][0]);
		printf("Idades : ");
		scanf("%d", &idade[i]);
		printf("Altura : ");
		scanf("%f", &altura[i]);
	}
	for(i = 0; i < n; i++)
	{
		somaAltura = somaAltura + altura[i];
		alturaMedia = somaAltura / (i + 1);
		if(idade [i] < 16)
		{
			quanti++;
		}
	}
	printf("\nAltura média: %.2f", alturaMedia);
	percentual = (quanti * 100.0) / n;
	printf("\nPessoas com menos de 16 anos : %.2f %%", percentual);

	for(i = 0; i < n; i++)
	{
		if(idade [i] < 16)
		{

			printf("\n %s", nome[i]);
		}
	}
	return(0);

}
