#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int fato;

	printf("Digite o valor de N: ");
	scanf("%d", &n);

	fato = 1;

	for(i = 1; i <= n; i++)
	{
		fato = fato * i;
	}
	printf("FATORIAL = %d", fato);
	return(0);
}
