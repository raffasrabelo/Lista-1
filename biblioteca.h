#include <stdio.h>
#include <string.h>
#include <float.h>

void leiaVetor(int vetor[],int n){
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&vetor[i]);
}
//-----------------------------------
void escrevaVetor(int vetor[], int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d |",vetor[i]);
	printf("\n");	
}

int somaVetor (int vetor[], int n){ //função para somar os valores do vetor, onde N é o tamanho do vetor a ser somado
	int soma=0, i;
	for (i=0; i<n; i++)
		soma+= vetor[i];
	return soma;
}

int menorValor(int vetor[], int n){
	int i;
	int menor=FLT_MAX;
	for(i=0; i<n; i++){
		if(vetor[i]<menor)
			menor=vetor[i];
	}
	return menor;	
}
