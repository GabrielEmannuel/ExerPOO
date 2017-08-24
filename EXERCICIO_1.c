/*Escreva um programa que carregue dois valores A e B pelo teclado e imprima todos os números
ímpares entre A e B.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1,n2;
    printf("Insira O Valor A:");
    scanf("%d",&n1);
    printf("Insira o Valor B:");
    scanf("%d",&n2);

    if(n2<n1){

    for (n1; n1>=n2; n1--){

        if (n1%2==0){

        }else{

            printf("O numero %d  eh impar\n",n1);

        }
    }

    }else{

    for (n1; n1<=n2; n1++){

        if (n1%2==0){

        }else{

            printf("O numero %d  eh impar\n",n1);

        }
    }
    }

}
