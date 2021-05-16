#include <stdio.h>

int main(){
	int tamanhoVetor;
	int i;
	int vetor[900];
	
	scanf("%d",&tamanhoVetor);
	
	for(i=0;i<tamanhoVetor;i++){
		scanf("%d",&vetor[i]);
	}
	
	for(i=tamanhoVetor-1;i>=0;i--){
		printf("%d",vetor[i]);
	}
	
}
