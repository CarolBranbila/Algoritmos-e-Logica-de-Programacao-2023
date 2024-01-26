#include <stdio.h>

int main(void)
{
	int n;
	int i;
	float divisao;
	float a;
	float b;

	printf("Quantos casos voce vai digitar? ");
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		printf("Entre com o numerador:");
		scanf("%f", &a);
		printf("Entre com o denominador: ");
		scanf("%f", &b);
		if(b == 0)
		printf("DIVISÃO IMPOSSIVEL\n");
		else{
			divisao = a / b;
			printf("DIVISÃO = %.2f \n ", divisao);
		}
	}
	return(0);
}
