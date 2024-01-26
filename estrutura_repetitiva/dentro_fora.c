#include <stdio.h>

int main(void)
{
	 int n;
	 int x;
	 int i;
	 int dentro;
	 int fora;

	 dentro = 0;
	 fora = 0;

	printf("quantos números você vai digigitar? ");
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		printf("Digite um numero: ");
		scanf("%d", &x);
		if( x >= 10 && x <= 20 )
		{
			dentro++;
		}
		else{
			fora++;
		}
	}
	printf("%d DENTRO", dentro);
	printf("\n %d FORA", fora);

	return(0);
}
