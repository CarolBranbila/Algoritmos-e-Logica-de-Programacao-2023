#include <stdio.h>

int main(void)
{
	float x;
	float y;

	printf("Valor de X : ");
	scanf("%f", &x);
	printf("Valor de Y : ");
	scanf("%f", &y);

	if(x == 0 && y == 0 )
	{
		printf("Origem");
	}
	else{
		if(y > 0 && x > 0)
		{
			printf("Q1");
		}
		else{
			if(y > 0 && x < 0)
			{
				printf("Q2");
			}
			else{
				if(y < 0 && x < 0)
				{
					printf("Q3");
				}
				else{
					if(y < 0 && x > 0)
					{
						printf("Q4");
					}
					else{
						if(x > 0 && y == 0)
						{
							printf("Eixo X");
						}
						else{
							printf("Eixo Y");
						}
					}
				}
			}
		}
	}
	return(0);
}
