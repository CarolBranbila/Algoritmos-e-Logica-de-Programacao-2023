#include <stdio.h>

int main (void)
{
	int n;
	int c;
	int r;
	int s;
	int i;
	char tipo;
	int quant;
	int total;
	double perccoelhos;
	double percratos;
	double percsapos;

	c = 0;
	r = 0;
	s = 0;

	printf("Quantos casos de teste serao digitados? ");
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		printf("============\n");
		printf("Quantidade de cobaias:");
		scanf("%d", &quant);
		printf("Tipo de cobaia :");
		scanf(" %c", &tipo);



		if( tipo == 'C') {
			c = c + quant;
		} else {
			if (tipo == 'R') {
				r = r + quant;
			} else {
				if(tipo == 'S')
				s = s + quant;
			}
		}
	}

	printf("============\n");

	total = c + s + r;
	perccoelhos = (c * 100.0) / total;
	percratos = (r * 100.0) / total;
	percsapos = (s * 100.0) / total;

	printf("RELATORIO FINAL:\n");
	printf("Total : %d cobaias \n", total);
	printf("Total de coelhos: %d\n", c);
	printf("Total de ratos : %d\n", r);
	printf("Total de sapos: %d\n", s);
	printf("Percentual de coelhos: %.2lf", perccoelhos);
	printf("\nPercentual de ratos : %.2lf", percratos);
	printf("\nPercentual de sapos : %.2lf", percsapos);

	return(0);

}
