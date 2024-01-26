#include <stdio.h>
#define PI 3.14159

int main (void)
{
	float r;
	float area;
	float potr;

	printf("Digite o valor do raio do circulo: ");
	scanf("%f", &r);
	potr = r * r;

	area = PI * potr;
	printf("AREA = %.3f", area);

	return(0);
}
