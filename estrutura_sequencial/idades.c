#include <stdio.h>


int main(void)
{
	char nome1[20];
	char nome2[20];
	int idade1;
	int idade2;
	double media;

	printf("Dados da Primeira pessoa: ");
	printf("\nNome: ");
	scanf("%s", nome1);
	printf("Idade: ");
	scanf("%d", &idade1);

	printf("Dados da Segunda pessoa: ");
	printf("\nNome: ");
	scanf("%s", nome2);
	printf("Idade: ");
	scanf("%d", &idade2);

	media = (idade1 + idade2) / 2;

	printf("A idade media de %s", nome1);
	printf(" e %s", nome2);
	printf(" é de %.2f", media);
	printf(" anos." );

	return(0);
}
