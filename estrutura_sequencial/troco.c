#include <stdio.h>

int main(void)
{
	int preco;
	int quant;
	int dinheiro;
	int troco;

	printf("Preço unitário do Produto: ");
	scanf("%d", &preco);
	printf("Quantidade comprada: ");
	scanf("%d", &quant);
	printf("Dinheiro recebido: ");
	scanf("%d", &dinheiro);

	troco = dinheiro - (preco * quant);
	printf("TROCO  = %d", troco);

	return(0);
}
