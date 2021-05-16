#include <stdio.h>

int main(){
	int tamanhoTabuleiro;
	int i;
	int j;
	char estiloTabuleiro;
	
	scanf("%d %c",&tamanhoTabuleiro,&estiloTabuleiro);
	if(estiloTabuleiro=='D'){
		for(i=0;i<tamanhoTabuleiro;i++){
			for(j=0;j<tamanhoTabuleiro;j++){
				if(i==j){
					printf("1");
				}
				else{
					printf("0");
				}
			}
			printf("\n");
		}
	}
	
	else if(estiloTabuleiro=='T'){
		for(i=0;i<tamanhoTabuleiro;i++){
			for(j=0;j<tamanhoTabuleiro;j++){
				if((i+j)%2==0){
					printf("1");
				}
				else{
					printf("0");
				}
			}
			printf("\n");
		}
	}
	
	else if(estiloTabuleiro=='I'){
		for(i=0;i<tamanhoTabuleiro;i++){
			for(j=0;j<tamanhoTabuleiro;j++){
				if(i>=j){
					printf("1");
				}
				else{
					printf("0");
				}
			}
			printf("\n");
		}
	}
	
	else if(estiloTabuleiro=='S'){
		for(i=0;i<tamanhoTabuleiro;i++){
			for(j=0;j<tamanhoTabuleiro;j++){
				if(i<=j){
					printf("1");
				}
				else{
					printf("0");
				}
			}
			printf("\n");
		}
	}
}
