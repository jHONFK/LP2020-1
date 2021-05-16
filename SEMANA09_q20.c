#include <stdio.h>
int main(){

int vet[10];
int i;
int j;
int auxiliar;

for(i=0;i<10;i++){
	scanf("%d",&vet[i]);
}

for(i=0;i<10;i++){
	for(j=i+1;j<10;j++){
		if(vet[i]>vet[j]){
			auxiliar=vet[i];
			vet[i]=vet[j];
			vet[j]=auxiliar;
		}
	}
}

for(i=0;i<10;i++){
	printf("%d ",vet[i]);
}
printf("\n");
for(i=9;i>=0;i--){
	printf("%d ",vet[i]);
}

}
