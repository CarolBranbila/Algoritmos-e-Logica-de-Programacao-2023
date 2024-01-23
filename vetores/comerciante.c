#include <stdio.h>

int main (void)
{
	int i;
	int n;

	printf("Serão digitados dados de quantos produtos? ");
	scanf("%d", &n);

	float compra[n];
	float venda[n];
	char nome[n][10];
	float compraTotal;
	float vendaTotal;
	float lucroTotal;
	float lucro[n];
	float percentual[n];
	int abaixo = 0;
	int entre = 0;
	int acima = 0;

	for(i=0; i<n; i++)
	{
		printf("Produto %d\n", (i+1));
		printf("Nome: ");
		scanf(" %s", &nome [i][0]);
		printf("Preco de Compra: ");
		scanf("%f", &compra[i]);
		printf("Preco de venda: ");
		scanf("%f", &venda[i]);
	}
	for(i=0; i<n; i++)
	{
		lucro[i] = (venda [i] - compra[i]);
		percentual [i] = (lucro [i] * 100)/compra [i];
		if(percentual[i] < 10)
		{
			abaixo++;
		}
		else{
			if(percentual [i] >= 10 && percentual[i] <= 20)
			{
				entre++;
			}
			else{
				if(percentual[i] > 20)
				{
					acima++;
				}
			}
		}
	}

	compraTotal = 0;
	vendaTotal = 0;
	for(i=0; i<n; i++)
	{
		compraTotal = compraTotal + compra[i];
		vendaTotal = vendaTotal + venda [i];
	}
	lucroTotal = vendaTotal - compraTotal;

	printf("RELATÓRIO: \n");
	printf("Lucro abaixo de 10%%: %d\n", abaixo);
	printf("Lucro entre 10%% e 20%%: %d\n", entre);
	printf("Lucro acima de 20%%: %d\n",acima);
	printf("Valor Total de compra: %.2f\n",compraTotal);
	printf("Valor Total de venda: %.2f\n",vendaTotal);
	printf("Lucro Total : %.2f", lucroTotal);

	return(0);


}
