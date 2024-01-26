#include <stdio.h>

int main (void)
{
	float celcius;
	float fahren;
	char tipo;

	printf("Voce vai digitar a temperatura em qual escala (c/f)?");
	scanf("%c", &tipo);

	if( tipo == 'f')
	{
		printf("Digite a temperatura em Fahrenheit:  ");
		scanf("%f", &fahren);

		celcius = (fahren - 32) * 5/9;

		printf("Temperatura equivalente em Celcius : %.2f", celcius);
	}
	else
		if(tipo == 'c')
		{
			printf("Digite a temperatura em Celcius:  ");
			scanf("%f", &celcius);

			fahren = celcius * 9/5 +32;

			printf("Temperatura equivalente em Fahrenheit : %.2f", fahren);
		}
	return(0);
}
