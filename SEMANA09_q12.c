#include <stdio.h>

int main(){
	int i;
	int val;
	scanf("%d",&val);
	for(i=1;i<=val;i++){
		if(i%4==0){
			printf("PIN,");
		}
		else{
			printf("%d,",i);
		}
		
	}
	
	
}
