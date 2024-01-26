#include <stdio.h>

int main(void)
{
	int x;
	int y;

	printf("Digite dois números: \n");
	scanf("%d", &x);
	scanf("%d", &y);

	while( x != y)
	{
		if(x < y)
		{
			printf("CRESCENTE");
		}
		else{
		printf("DECRESCENTE");
		}
		printf("\nDigite outros dois numeros: \n");
		scanf("%d", &x);
		scanf("%d", &y);
	}
	return(0);
}
