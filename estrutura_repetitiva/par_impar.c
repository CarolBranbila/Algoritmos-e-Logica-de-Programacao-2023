#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int x;

	printf("Quantos números voce vai digitar?" );
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		printf("\nDigite um número: ");
		scanf("%d", &x);

		if(x == 0)
		printf("NULO");
		else{
			if(x < 0 && x % 2 == 0)
			printf("PAR NEGATIVO");
			else{
				if(x > 0 && x % 2 == 0)
				printf("PAR POSITIVO");
				else{
					if(x < 0 && x%2 != 0)
					printf("IMPAR NEGATIVO");
					else {
						if(x > 0 && x%2 != 0)
						printf("IMPAR POSITIVO");
					}
				}
			}

		}
	}
	return(0);

}
