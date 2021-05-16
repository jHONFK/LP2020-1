#include <stdio.h>

int main(){
	char c = '0';
	int vez = 1;
	int contJogadorUm=0;
	int contJogadorDois=0;
	int charS1=0;
	int charS2=0;
	int restoJogadorUm=0;
	int restoJogadorDois=0;
	while(1){
		if(charS1==1 && charS2==1){
			break;
		}
		scanf("%c", &c);
		
		if(charS1==1){
			vez=2;
		}
		
		else if(charS2==1){
			vez=1;
		}
	
		if(vez==1){
			vez=2;
			switch(c){
			case 'A': contJogadorUm++ ;
				break;
			case 'J': contJogadorUm+=11;
				break;
			case 'Q': contJogadorUm+=12;
				break;
			case 'K': contJogadorUm+=13;
				break;
			case '1': contJogadorUm++;
				break;
			case '2': contJogadorUm+=2;
				break;
			case '3': contJogadorUm+=3;
				break;
			case '4': contJogadorUm+=4;
				break;
			case '5': contJogadorUm+=5;
				break;
			case '6': contJogadorUm+=6;
				break;
			case '7': contJogadorUm+=7;
				break;
			case '8': contJogadorUm+=8;
				break;
			case '9': contJogadorUm+=9;
				break;	
			case '10': contJogadorUm+=10;
				break;	
			case 'S': charS1++; 
				break;	
			}	
			printf("Vez: %d\n",vez);
			printf("Pontuacao jogador 1 - %d\n",contJogadorUm);
		}
		else {
			vez=1;
			switch(c){
			case 'A': contJogadorDois++ ;
				break;
			case 'J': contJogadorDois+=11;
				break;
			case 'Q': contJogadorDois+=12;
				break;
			case 'K': contJogadorDois+=13;
				break;
			case '1': contJogadorDois++;
				break;
			case '2': contJogadorDois+=2;
				break;
			case '3': contJogadorDois+=3;
				break;
			case '4': contJogadorDois+=4;
				break;
			case '5': contJogadorDois+=5;
				break;
			case '6': contJogadorDois+=6;
				break;
			case '7': contJogadorDois+=7;
				break;
			case '8': contJogadorDois+=8;
				break;
			case '9': contJogadorDois+=9;
				break;	
			case '10': contJogadorDois+=10;
				break;	
			case 'S': charS2++; 
				break;		
			}	

		}
		
	}//Fim while
	
		
	
	return 0;
}
