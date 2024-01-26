#include <stdio.h>

int main (void)
{
	int x;
	int y;
	int i;
	int soma;
	int troca;

	soma = 0;

	printf("Digite dois numeros: ");
	scanf("%d", &x);
	scanf("%d", &y);

	if(x > y)
	{
		troca = x;
		x = y;
		y = troca;

	}

	for (i = x + 1; i < y; i++)
	{
		if( i % 2 != 0 )
		{
			soma = soma + i;
		}
	}
	printf("SOMA DOS IMPARES : %d", soma);
	return(0);
}
