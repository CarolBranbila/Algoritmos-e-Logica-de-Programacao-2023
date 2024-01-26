#include <stdio.h>

int main (void)
{
	int tipo;
	int alcool;
	int diesel;
	int gasolina;

	alcool = 0;
	diesel = 0;
	gasolina = 0;

	printf("Informe um código (1,2,3) ou 4 para parar: ");
	scanf("%d", &tipo);

	while(tipo != 4 )
	{
		switch (tipo)
		{
		case 1 :
			alcool = alcool + 1;
			break;
		case 2 :
			gasolina = gasolina + 1;
			break;
		case 3 :
			diesel = diesel + 1;
			break;
		}
		printf("Informe um código (1,2,3) ou 4 para parar: ");
		scanf("%d", &tipo);
	}

	if(tipo == 4)
	{
		printf("Muito Obrigada!");
		printf("\nAlcool: %d", alcool);
		printf("\nGasolina: %d", gasolina);
		printf("\nDiesel: %d", diesel);
	}
	return(0);
}
