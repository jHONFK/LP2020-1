#include <stdio.h>

int main(){
	int andar=0;
	int val=0;
	int n1=0,n2=0,n3=0,n4=0,n5=0;
	int media;
	while(val>=0){
		scanf("%d"&val);
		n5=n4;
		n4=n3;
		n3=n2;
		n2=n1;
		n1=val;
		
	}
	
	media = (n1+n2+n3+n4+n5)/5;
	if(media>=1000){
		printf("DEU RUIM");
	}
	else{
		printf("TURNO TRANQUILO");
	}
	
	
}
