#include <stdio.h>

int	main(void)
{
	int n;
	int i;
	int produto;

	printf("Deseja a tabuada para qual valor? :");
	scanf("%d", &n);

	for (i = 1; i <= 10; i++ )
	{
		produto = n * i;
		printf("%d * %d = %d \n",n, i, produto);
	}
	return(0);
}
