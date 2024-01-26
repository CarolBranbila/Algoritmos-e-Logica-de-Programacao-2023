#include <stdio.h>

int main(void)
{
	float A;
	float B;
	float C;
	float areaQuadrado;
	float areaTriangulo;
	float areaTrapezio;

	printf("Digite a medida A : ");
	scanf("%f", &A);
	printf("Digite a medida B : ");
	scanf("%f", &B);
	printf("Digite a medida C : ");
	scanf("%f", &C);

	areaQuadrado = A * A;
	areaTriangulo = (A * B)/ 2;
	areaTrapezio = ((A + B)* C) / 2;

	printf("AREA DO QUADRADO = %.4f \nAREA DO TRAIANGULO = %.4f \nAREA DO TRAPEZIO = %.4f ",areaQuadrado, areaTriangulo, areaTrapezio );
	return(0);

}
