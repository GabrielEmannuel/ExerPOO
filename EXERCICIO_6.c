#include "stdio.h";
#include "string.h";

void main() {
  char s[256];

  printf("Informe uma palavra:\n");
  gets(s);

  int i = 0;				// primeira posição da cadeia
  int j = (strlen(s) - 1);	// última posição da cadeia

  int ehPalindromo = 1;		// flag: 0- n�o eh uma palavra palíndroma
							 //1- eh uma palavra palíndroma
				
  while ((i<j) && (ehPalindromo == 1)) 
    if (s[i] != s[j])
       ehPalindromo = 0; 
    else {
       i = i + 1;
       j = j - 1;
    }

  if (ehPalindromo == 1)
     printf("\nA palavra informada eh palindromo.");
  else
     printf("\nA palavra informada nao eh um palindromo.");
}
