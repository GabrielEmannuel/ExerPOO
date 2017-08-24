#include "stdlib.h"
#include "stdio.h"

int main(void) {
	
	int i;
    char nome_func[25],parada[3];
    float salario,n_salario,soma_novos,soma_atuais,diferenca,acres;

    printf("Deseja Cadastrar Cliente?\n");
    printf("Qualquer tecla p/ continuar *fim* p/ terminar: ");
    scanf("%s", &parada);
    
    for(i=0;parada[i];i++){
            parada[i]=tolower(parada[i]);
        }//laco para com a funcao towlower deixar todas as letras minusculas;

    while(strcmp(parada,"fim")!=0) {

        printf("Digite o nome do funcionario:");
        scanf("%s",nome_func);
        printf("Digite o salario do funcionario:");
        scanf("%f",&salario);

        if (salario <= 150) {
          acres = (salario * 25) / 100;
        }else{
          if (salario > 150 && salario < 300) {
            acres = (salario * 20) / 100;
          }else{
            if (salario >= 300 && salario < 600) {
              acres = (salario * 15) / 100;
            }else{
              if (salario >= 600) {
                acres = (salario * 10) / 100;
              }
            }
          }
        }
		
    n_salario = salario + acres;
    
	system("cls");    
	
	printf("O salario atual de %s, e:%2.f \n", nome_func, salario);
    printf("O novo salario de %s, e:%2.f\n", nome_func, n_salario );

        soma_atuais += salario;
        soma_novos += n_salario;
        diferenca = soma_novos - soma_atuais;

        
	printf("Deseja Cadastrar novo funcionario?\n");
    printf("qualquer tecla p/ continuar FIM p/ terminar:");
    scanf("%s", &parada);
       
        
		
    }
    
    system("cls");

    printf("Soma dos salarios atuais: %2.f",soma_atuais);
    printf("\nSoma dos novos salarios: %2.f",soma_novos);
    printf("\nDiferenca: %2.f",diferenca);




  return 0;
}
