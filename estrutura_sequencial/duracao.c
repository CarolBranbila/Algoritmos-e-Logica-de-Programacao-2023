#include <stdio.h>

int main(void)
{
	int duracao;
	int horas;
	int resto;
	int minutos;
	int segundos;

	printf("Digite a duração em segundos : ");
	scanf("%d", &duracao);

	horas = duracao / 3600;
	resto = duracao % 3600;
	minutos = resto / 60;
	segundos = resto % 60;

	printf("%d : %d : %d", horas, minutos, segundos);

	return(0);


}
