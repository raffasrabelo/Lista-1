#include <stdio.h>
#include <string.h>
int main ()
{
    char vetor[101];
    int tamanho, i;
    gets(vetor);
    tamanho=strlen(vetor);
    for(i=tamanho-1; i>=0; i--){// lógica aplicada para ler o vetor de tras pra frente.
        printf("%c",vetor[i]);
    }
  return 0;
}
