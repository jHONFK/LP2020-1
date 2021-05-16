#include <stdio.h>

int main(){
	int i;
	int vetor[100];
	int contSequencia=0;
	for(i=0;i<100;i++){
		scanf("%d",&vetor[i]);
		if(vetor[i]==vetor[i-1]){
			contSequencia++;
		}
	}
	printf("%d",contSequencia);
	return 0;
}
