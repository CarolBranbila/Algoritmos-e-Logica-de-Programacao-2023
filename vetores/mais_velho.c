#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int velho;
	int posicao;

	printf("Quantas pessoas voce vai digitar? ");
	scanf("%d", &n);

	char nome [n][100];
	int idade [n];

	for(i = 0; i < n; i++)
	{
		printf("\nDados da %da pessoa: \n", (i + 1));
		printf("Nome:");
		scanf("%s", &nome[i][0]);
		printf("Idades : ");
		scanf("%d", &idade[i]);
	}
	velho = idade[0];
	for( i = 1; i < n; i++)
	{
		if(idade[i] > velho)
		{
			velho = idade[i];
			posicao = i;
		}
	}
	printf("PESSOA MAIS VELHA: %s", nome[posicao]);

	return(0);

}
