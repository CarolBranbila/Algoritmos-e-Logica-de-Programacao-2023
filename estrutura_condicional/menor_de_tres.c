#include <stdio.h>

int main(void)
{
	int primeiro;
	int segundo;
	int terceiro;
	int menor;

	printf("Primeiro valor : ");
	scanf("%d", &primeiro);
	printf("Segundo valor : ");
	scanf("%d", &segundo);
	printf("Terceiro valor : ");
	scanf("%d", &terceiro);

	if((primeiro <= segundo) && (primeiro <= terceiro))
		menor = primeiro;
	else
	{
		if(segundo <= terceiro)
		menor = segundo;
		else
		menor = terceiro;
	}

	printf("MENOR = %d", menor);

	return(0);
}
