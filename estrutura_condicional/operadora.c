#include <stdio.h>

int main(void)
{
	int minuto;
	float valor;

	printf("Digite a quantidade de minutos : ");
	scanf("%d", &minuto);

	if(minuto > 100)
	{
		valor = (minuto - 100) * 2 + 50;
	}
	else
	valor = 50.00;

	printf("Valor a pagar %.2f", valor);
	return(0);

}
