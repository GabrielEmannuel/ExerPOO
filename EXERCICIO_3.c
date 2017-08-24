#include "stdio.h"
#include "stdlib.h"

int main()
{
	
	
	int vet_bin[50]; 
	int i = 0, j, num;
					
	printf("Insira o valor em decimal: ");
	scanf("%i", &num );

	while(num > 0)
	{
		
		vet_bin[i] = num % 2;
		i++;
		num = num / 2;
	}

	printf("Valor em binario:");

	for(j = i - 1; j >= 0; j--)
		printf("%i", vet_bin[j]);
	printf("\n");

	return 0;
	
	}
