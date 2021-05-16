#include <stdio.h>

int main(){
	char texto[50];
	int i;
	gets(texto);
	for(i=0;i<50;i++){
		if(texto[i]=='a' || texto[i]=='e'|| texto[i]=='i'
		|| texto[i]=='o' || texto[i]=='u')
		{
			texto[i]='i';
		}
		
		else if(texto[i]=='A' || texto[i]=='E' || texto[i]=='I' || texto[i]=='O' || texto[i]=='U'){
			texto[i]='I';
		}
	}
	
	printf("%s",texto);
}
