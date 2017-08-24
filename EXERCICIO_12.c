#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float A[150], menor; 
    int i, menorpos;

    
    // Recebendo os valores do vetor.
    for (i = 0; i < 150; ++i) {
        printf("Insira o peso A[%d]: ", i);
        scanf("%f", &A[i]);
    }
    
    /* 
    As variáveis, maior e menor, recebem inicialmente o valor
    do primeiro elemento do vetor, ou seja, A[0].
    */
    menor = A[0];


    for (i = 0; i < 150; ++i) {
        if (A[i] < menor){
        menor = A[i]; 
        menorpos = i;
        }
        
    }
        
    printf(" O menor peso se encontra na casa [%i]: %f", menorpos, menor);
        
    getchar();
    return 0;
}
