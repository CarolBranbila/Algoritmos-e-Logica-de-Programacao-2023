#include <stdio.h>

int main(void)
{
	float preco;
	int quantidade;
	float dinheiro;
	float troco;
	float valor;

	printf("Preço unitário do produto: ");
	scanf("%f", &preco);
	printf("Quantidade comprada: ");
	scanf("%d", &quantidade);
	printf("Dinheiro recebido: ");
	scanf("%f", &dinheiro);

	valor = preco * quantidade;
	troco = dinheiro - valor;

	if(valor > dinheiro)
	{
		troco = troco * (-1);
		printf("DINHEIRO INSUFICIENTE. FALTAM %.2f REAIS", troco);
	}
	else
	{
		printf("TROCO = %.2f", troco);
	}

	return(0);
}
