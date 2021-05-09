#include <stdio.h>

int main(){
	int val=1;
	int flag=0;
	
	while(val>=0)
	{
		if(val>=1000){
			flag=1;
		}
		
		scanf("%d",&val);
	}
	
	if(flag==1){
		printf("DEU RUIM");
	}
	
	else{
		printf("TURNO TRANQUILO");
	}
}
