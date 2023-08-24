#include <stdio.h>
#include <float.h>

float maiorValor(float vet[], int n){
		int i;
		float maior= FLT_MIN;
		for(i=0; i<n; i++){
			if(vet[i]>maior){
			maior = vet[i];	
		
		}
	}	
	return maior;
}	
int main () {
	int n, i;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	float vet[n], maior;
	
	for(i=0; i<n; i++){// entrando com o vetor
		printf("Digite o %d° valor: ", i + 1);
		scanf("%f", &vet[i]);	
		}
	maior=maiorValor(vet, n);
	printf("maior valor: %.1f \n", maior);
	for(i=0; i<n; i++)
	 	printf("%.1f | ", vet[i]);
			
	return 0;
}
