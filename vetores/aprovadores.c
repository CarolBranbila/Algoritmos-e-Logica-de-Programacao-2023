#include <stdio.h>

int main(void)
{
	int i;
	int n;


	printf("Qauntos alunos serão digitados? ");
	scanf("%d", &n);

	char nome[n][500];
	double nota1 [n];
	double nota2 [n];

	double media [n];

	for( i = 0; i < n; i++)
	{

		printf("Digite nome, primeira e segunda nota do %do aluno\n", (i + 1) );
		scanf("%s", &nome[i][0]);
		scanf("%lf", &nota1[i]);
		scanf("%lf", &nota2[i]);
		media [i] = (nota1 [i] + nota2[i])/2;
	}
	printf("Alunos aprovados: \n");
	for(i = 0 ; i < n; i++)
	{
		if(media[i] >= 6.0)
		{
			printf("\n%s", nome[i]);
		}
	}
	return(0);

}
