#include <stdio.h>

int main (void)
{
	int i;
	int j;
	int n;
	int k;


	printf("Quantos valores vai ter cada vetor ?");
	scanf("%d", &n);

	int vetA [n];
	printf("Digite os valores do vetor A: ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &vetA [i]);
	}
	printf("Digite os valores do vetor B: ");

	int vetB [n];
	for(j = 0; j< n; j++)
	{
		scanf("%d", &vetB [j]);
	}
	printf("VETOR RESULTANTE: \n");

	int vetsoma [n];
	i = 0;
	j = 0;

	for(k = 0; k < n; k++)
	{
		vetsoma[k] = vetA[i] + vetB [j];
		printf("%d \n", vetsoma[k]);
		i++;
		j++;
	}
	return(0);
}
