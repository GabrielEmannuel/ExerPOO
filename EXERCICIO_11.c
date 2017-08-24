#include "stdio.h"
#include "stdlib.h"


/*programa que leia uma lista contendo os salários dos funcionários da empresa, e imprima quantos
funcionários ganham salário acima da média. Sabe-se que a empresa possui 50 funcionários.

Considerando que não há um número fixo de 50 funcionários, o programa pergunta no
início quantos funcionários possui a empresa e realiza o restante do processo.*/



int main(int argc, char const *argv[])
{

	float salario[50], total_valor = 0, media_salario = 0;
	int i, n_func,acima_media;

	printf("Informe o numero de funcionarios *MAX 50*:  ");
	scanf("%i",&n_func);

	for ( i= 1; i < n_func + 1; ++i)
	{
		printf("Informe o salario do %i funcionario: ",i);
		scanf("%f", &salario[i]);
		total_valor = salario[i] + total_valor;

	}

	media_salario = total_valor / n_func;
	
	for ( i= 1; i < n_func + 1; ++i)
	{
		if (salario[i] > media_salario){
			acima_media ++;
		}
		
		
	}

	
	
	printf("Media_salario: %f\n ", media_salario);
	printf("Total de funcionários acima da media: %i", acima_media);
	return 0;
}
