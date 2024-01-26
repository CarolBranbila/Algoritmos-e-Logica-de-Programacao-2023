#include <stdio.h>
#include <math.h>

int main(void)
{
	double a;
	double b;
	double c;
	double x1;
	double x2;
	double delta;

	printf("coeficiente a: ");
	scanf("%lf", &a);
	printf("coeficiente b: ");
	scanf("%lf", &b);
	printf("coeficiente c: ");
	scanf("%lf", &c);

	delta = pow(b,2) - (4 * a * c);
	if(a == 0 || delta < 0)
	{
		printf("esta equacao nao possui raizes reais");
	}
	else
	{
		x1 = ((-b + sqrt(delta)) / (2 * a));
		x2 = ((-b - sqrt(delta)) / (2 * a));
		printf("X1 = %.4lf", x1);
		printf("\nX2 = %.4lf", x2);
	}

	return(0);

}
