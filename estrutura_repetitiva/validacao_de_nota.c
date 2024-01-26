#include <stdio.h>

int main(void)
{
	float nota1;
	float nota2;
	float media;

	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);

	while(nota1 < 0 || nota1 > 10)
	{
		printf("Valor invalido, Tente novamente :");
		scanf("%f", &nota1);
	}
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);

	while(nota2 < 0 || nota2 > 10)
	{
		printf("Valor invalido, Tente novamente :");
		scanf("%f", &nota2);
	}
	media = (nota1+nota2)/2;
	printf("MEDIA = %.2f", media);

	return(0);

}
