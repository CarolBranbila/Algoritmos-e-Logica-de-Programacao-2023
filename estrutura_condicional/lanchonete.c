#include <stdio.h>

int main(void)
{
	int cod;
	int quant;
	float preco;
	float valor;

	preco = 0;

	printf("Codigo do produto comprado : ");
	scanf("%d", &cod);
	printf("Quantidade comprada :");
	scanf("%d", &quant);

	if(cod == 1)
	{
		preco = 5.00;
	}
	else {
		if(cod == 2)
		{
			preco = 3.50;
		}
		else{
			if(cod == 3)
			{
				preco = 4.80;
			}
			else{
				if(cod == 4)
				{
					preco = 8.90;
				}
				else{
					if(cod == 5)
					{
						preco = 7.32;
					}
				}
			}
		}
	}
	valor = preco * quant;
	printf("Valor a pagar : %.2f", valor);
	return(0);
}
