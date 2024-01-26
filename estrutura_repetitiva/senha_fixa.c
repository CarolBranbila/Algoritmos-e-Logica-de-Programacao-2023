#include <stdio.h>

int main(void)
{
	int senha;

	printf("Digite a senha : ");
	scanf("%d", &senha);

	while(senha != 2002)
	{
		printf("Senha Invalida ! Tente Novamente : ");
		scanf("%d", &senha);
	}
	printf("Acesso permitido!");

	return(0);
}
