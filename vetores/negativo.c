#include <stdio.h>

int main (void)
{
	int n;
	int i;
	int number [9];

	printf("Quantos números voce vai digitar ?");
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		printf("Digite um número: ");
		scanf("%d", &number[i]);
	}
	printf("NUMEROS NEGATIVOS:");
	for(i = 0; i < n; i++)
	{
		if(number[i] < 0)
		{
			printf("\n%d", number[i]);
		}
	}
	return(0);
}
