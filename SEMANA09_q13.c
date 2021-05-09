#include <stdio.h>

int main(){
	int val=1;
	int maior1=-1,maior2=-1,maior3=-1;
	int v1=1,v2=1,v3=1;
	
	while(val!=0){
		scanf("%d",&val);
		if(val>maior1){
			maior3=maior2;
			maior2=maior1;
			maior1=val;
		}
		
		else if(val>maior2){
			maior3=maior2;
			maior2=val;
		}
		
		else if(val>maior3){
			maior3=val;
		}
		
		
	}
	
	printf("%d %d %d",maior1,maior2,maior3);
	
	
}
