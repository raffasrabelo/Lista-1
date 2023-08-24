#include <stdio.h>
#include <float.h>

float menorValor(float vet[], int n){
		int i;
		float menor= FLT_MAX;
		for(i=0; i<n; i++){
			if(vet[i]<menor){
			menor = vet[i];	
		
		}
	}	
	return menor;
}	
int main () {
	int n, i;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	float vet[n], menor;
	
	for(i=0; i<n; i++){// entrando com o vetor
		printf("Digite o %d° valor: ", i + 1);
		scanf("%f", &vet[i]);	
		}
	menor=menorValor(vet, n);
	printf("Menor valor: %.1f \n", menor);
	for(i=0; i<n; i++)
	 	printf("%.1f | ", vet[i]);
			
	return 0;
}
