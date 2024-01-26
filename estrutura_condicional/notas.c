#include <stdio.h>

int main(void)
{
	float nota1;
	float nota2;
	float notaf;

	printf("Digite a primeira nota : ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota : ");
	scanf("%f", &nota2);

	notaf = nota1 + nota2;
	printf("NOTA FINAL :%.1f", notaf);
	if(notaf < 60.00)
	{
		printf("\nREPROVADO");
	}
	return(0);
}
