#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int soma;

	printf("Digite o valor de x : ");
	scanf("%d", &x);
	printf("Digite o valor de y : ");
	scanf("%d", &y);

	soma = x + y ;

	printf("SOMA = %d", soma);

	return(0);

}
