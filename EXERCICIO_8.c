#include <stdlib.h>
#include <stdio.h>
 
//primos so dividem por 1 e por eles mesmo
//sendo assim so temos no maximo 2 divisores

int primo (int n) {
 
int i, divisores = 0 ;

for(i=1;i<=n; i++) {
 
      if (n % i == 0)
      {
      	divisores++;
      }
}

return divisores;
}
 
main() {
 
int n;
printf("entre com um valor");
scanf("%d",&n);

if (primo(n) == 2)
{
printf("O numero eh primo\n");
}else
printf("O numero nao eh primo\n");
 

system("pause");
return 0;
 
}
