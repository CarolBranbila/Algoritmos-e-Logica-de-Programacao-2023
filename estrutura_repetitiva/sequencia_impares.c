#include <stdio.h>

int main(void)
{
	int x;
	int i;

	printf("Digite o valor de X: ");
	scanf("%d", &x);

	for(i = 1 ; i <= x; i++ )
	{
		if(i % 2 != 0)
		{
			printf("%d\n", i);
		}
	}
	return(0);
}
