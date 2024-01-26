#include <stdio.h>

int main (void)
{
	double base;
	double altura;
	double area;
	double perimetro;
	double diagonal;

	printf("Base do retangulo: ");
	scanf("%lf", &base);
	printf("Altura do retangulo: ");
	scanf("%lf", &altura);

	area = base * altura;
	perimetro = 2 * (base + altura);

}
