#include <stdio.h>

int main()
{
	int n1,n2,n5,n10,n20,n50,n100;
	int result;
	int valor;
	
	scanf("%d",&valor);
	
	n100=valor%100;
	n50=n100%50;
	n20=n50%20;
	n10=n20%10;
	n5=n10%5;
	n2=n5%2;
	n1=n2%1;
	
	result=valor/100;
	printf("%d nota(s) de 100\n",result);
	
	result=n100/50;
	printf("%d nota(s) de 50\n",result);
	
	result=n50/20;
	printf("%d nota(s) de 20\n",result);
	
	result=n20/10;
	printf("%d nota(s) de 10\n",result);
	
	result=n10/5;
	printf("%d nota(s) de 5\n",result);
	
	result=n5/2;
	printf("%d nota(s) de 2\n",result);
	
	result=n2/1;
	printf("%d nota(s) de 1",result);
	
}
