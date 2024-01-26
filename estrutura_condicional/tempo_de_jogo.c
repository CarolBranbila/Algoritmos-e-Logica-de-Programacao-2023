#include <stdio.h>

int main(void)
{
	int inicial;
	int final;
	int duracao;

	printf("Hora inicial : ");
	scanf("%d", &inicial);
	printf("Hora final : ");
	scanf("%d", &final);

	if(inicial == final)
	{
		duracao = 24;
	}
	else{
		if(inicial > final)
		{
			duracao = (24 - inicial) + final;
		}
		else{
			duracao = final - inicial;
		}
	}
	printf("O JOGO DUROU %d HORA(S)", duracao);

	return(0);
}
