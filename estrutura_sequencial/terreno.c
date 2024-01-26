#include <stdio.h>

int main (void)
{
	double largura;
	double comprimento;
	int metroQuadrado;

	double area;
	double preco;

	printf("Digite a largura do terreno: ");
	scanf("%lf", &largura);
	//printf("%d", largura);
	printf("Digite o comprimento do terreno: ");
	scanf("%lf", &comprimento);
	printf("Digite o valor do metro quadrado: ");
	scanf("%d", &metroQuadrado);

	area = largura * comprimento;
	preco = area * metroQuadrado;

	printf(" Area do terreno = %.2lf", area);
	printf("\nPreco do terreno = %.2lf", preco);

	return(0);
}
