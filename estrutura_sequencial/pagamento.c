#include <stdio.h>

int main(void)
{
	char nome1[20];
	char nome2[20];
	int valorHora;
	int horasTrabalhadas;
	float pagamento;

	printf("Nome : ");
	scanf("%s", nome1);
	scanf("%s", nome2);
	printf("Valor por Hora : ");
	scanf("\n%d", &valorHora);
	printf("Horas trabalhadas : ");
	scanf("%d", &horasTrabalhadas);

	pagamento = valorHora * horasTrabalhadas;

	printf("O pagamento para %s %s deve ser %.2f", nome1, nome2, pagamento);

	return(0);
}
