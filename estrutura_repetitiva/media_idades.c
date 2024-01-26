#include <stdio.h>

int main(void)
{
	int idade;
	int total;
	int conta;
	float media;

	total = 0;
	conta = 0;

	printf("Digite as idades: ");
	scanf("%d", &idade);

	while(idade >= 0)
	{
		total = total + idade;
		conta = conta + 1;
		scanf("%d", &idade);
	}

	if(conta == 0)
	{
		printf("IMPOSSIVEL CALCULAR");
	}
	else {
		media = total / conta;
		printf("MEDIA = %.2f", media);
	}

	return(0);
}
