#include <stdio.h>

int main(void)
{
	int n;
	int i;
	float media;
	float x1;
	float x2;
	float x3;

	printf("Quantos casos voce vai digitar? ");
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		printf("Digite tres numeros: \n");
		scanf("%f", &x1);
		scanf("%f", &x2);
		scanf("%f", &x3);
		media = (x1 * 2 + x2 * 3 + x3 * 5) / 10;
		printf("MEDIA = %.1f\n", media);
	}
	return(0);

}
