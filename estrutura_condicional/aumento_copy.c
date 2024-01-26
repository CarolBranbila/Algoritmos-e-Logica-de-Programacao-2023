#include <stdio.h>
#include <stdbool.h>

bool inRange(float target, int start, int end)
{
	return target > start && target <= end;
}

int main (void)
{
	float salario;
	float novosal;
	float aumento;
	int porcentagem;

	printf("Digite o salario da pessoa : ");
	scanf("%f", &salario);

	if (inRange(salario, 0, 1000)) {
		porcentagem = 20;
	} else if (inRange(salario, 1000, 3000)) {
		porcentagem = 15;
	} else if (inRange(salario, 3000, 8000))
	{
		porcentagem = 10;
	} else {
		porcentagem = 5;
	}

	aumento = salario * (porcentagem / 100.0);
	novosal = salario + aumento;

	printf("Novo salario = %.2f", novosal);
	printf("\nAumento = %.2f", aumento);
	printf("\nPorcentagem = %d%%", porcentagem);

	return(0);
}
