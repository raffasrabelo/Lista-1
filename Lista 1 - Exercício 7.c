#include <stdio.h>

int main ()
{
    int qtdElementos;//variavel da quantidade de elementos
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &qtdElementos);
    int vetUm[qtdElementos], vetDois[qtdElementos], vetTres[qtdElementos]; // declara��o dos vetores

    printf("Digite os valores do vetor um: ");
    for(int i=0; i<qtdElementos; i++){//lendo vetor 1

        scanf("%d", &vetUm[i]);
    }

    printf("Digite os valores do vetor dois: ");
     for(int i=0; i<qtdElementos; i++){// lendo vetor 2
        scanf("%d", &vetDois[i]);
    }

    printf ("Resultado da multiplica��o dos indices semelhantes dos vetores: \n");
     for(int i=0; i<qtdElementos; i++){// multiplica��o dos vetores
        vetTres[i] = vetUm[i]*vetDois[i];
        printf("%d\t", vetTres[i]);
    }
  return 0;
}
