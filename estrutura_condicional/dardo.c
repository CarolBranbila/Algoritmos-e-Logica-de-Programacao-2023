#include <stdio.h>

int main(void)
{
	float dist1;
	float dist2;
	float dist3;
	float maior;

	printf("Digite as tres distancia: \n");
	scanf("%f", &dist1);
	scanf("%f", &dist2);
	scanf("%f", &dist3);

	if((dist1 >= dist2)&& (dist1 >= dist3))
		maior = dist1;
	else
	{
		if(dist2 >= dist3)
		maior = dist2;
		else
		maior = dist3;
	}

	printf("MAIOR DISTANCIA = %.2f", maior);
	return(0);
}
