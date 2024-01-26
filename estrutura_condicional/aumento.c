#include <stdio.h>

int main (void)
{
	float salario;
	float novosal;
	float aumento;
	int porcentagem;

	printf("Digite o salario da pessoa : ");
	scanf("%f", &salario);

	if(salario <= 1000)
	{
		aumento = salario * 0.20;
		porcentagem = 20;
	}
	else{
		if(salario <= 3000)
		{
			aumento = salario * 0.15;
			porcentagem = 15;
		}
		else{
			if(salario <= 8000)
			{
				aumento = salario * 0.10;
				porcentagem = 10;
			}
			else{
				aumento = salario * 0.05;
				porcentagem = 5;
			}
		}
	}
	novosal = salario + aumento;

	printf("Novo salario = %.2f", novosal);
	printf("\nAumento = %.2f", aumento);
	printf("\nPorcentagem = %d%%", porcentagem);

	return(0);
}
