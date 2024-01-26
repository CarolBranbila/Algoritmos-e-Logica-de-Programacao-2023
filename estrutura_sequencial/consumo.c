#include <stdio.h>

int main (void)
{
	int distancia;
	float combustivel;
	float consumo;

	printf("Distancia percorrida : ");
	scanf("%d", &distancia);
	printf("Combustível gasto : ");
	scanf("%f", &combustivel);

	consumo = distancia / combustivel;

	printf("Consumo medio = %.3f", consumo);

	return(0);

}
