#include <stdio.h>
#include <string.h>



int somaVetor (int vetor[], int n){//função para somar os valores do vetor
	int soma=0, i;
	for (i=0; i<n; i++)
		soma+= vetor[i];
	return soma;
}

int main(){
	int n;
	
	printf("Digite o tamanho do vetor a ser somado: ");
	scanf("%d",&n);
	
	int vetor[n], i;
	for(i=0; i<n; i++){//lendo os valores do vetor
		printf("Digite o valor de vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
	}//fim leitura do vetor
	
	
	
	printf("A soma dos valores do vetor dado eh: %d\n",somaVetor(vetor, n));//chamando a função somaVetor
	
	return 0;
}
