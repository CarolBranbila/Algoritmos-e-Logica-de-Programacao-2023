#include <stdio.h>

int	main(void)
{
	int x;
	int soma;

	printf("Digite um número inteiro: ");
	scanf("%d", &x);

	while(x != 0)
	{
		if(x % 2 != 0)
		{
			x = x + 1;
		}
		soma = 5 * x + 20 ;

		printf("SOMA = %d", soma);
		printf("\nDigite um número inteiro: ");
		scanf("%d", &x);
	}
	return(0);
}
