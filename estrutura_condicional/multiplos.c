#include <stdio.h>

int main(void)
{
	int a;
	int b;

	printf("Digite dois numeros inteiros : \n");
	scanf("%d", &a);
	scanf("%d", &b);

	if(a % b == 0 || b % a == 0)
	{
		printf("Sao Multiplos");
	}
	else{
		printf("Não são Multiplos");
	}

	return(0);
}
