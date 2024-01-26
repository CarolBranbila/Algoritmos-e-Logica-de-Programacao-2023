#include <stdio.h>

int main(void)
{
	int x;
	int y;

	printf("Digite os valores das coordenadas X e Y: \n");
	scanf("%d", &x);
	scanf("%d", &y);

	while(x != 0 && y != 0)
	{
		if(y > 0 && x > 0)
		{
			printf("Quadrante Q1");
		}
		else{
			if(y > 0 && x < 0)
			{
				printf("Quadrante Q2");
			}
			else{
				if(y < 0 && x < 0)
				{
					printf("Quadrante Q3");
				}
				else{
					if(y < 0 && x > 0)
					{
						printf("Quandrante Q4");
					}
					}
				}
			}
			printf("\nDigite os valores das coordenadas X e Y: \n");
			scanf("%d", &x);
			scanf("%d", &y);
	}
	return(0);

}
