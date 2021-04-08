#include <stdio.h>

int main()
{
	int digVer;
	int v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11,v12;
	int somaImpar,resultImpar,somaPar,resultPar;
	
	scanf("%i %i %i %i %i %i %i %i %i %i %i %i %i ", &digVer, &v1, &v2, &v3, &v4, &v5, &v6, &v7, &v8, &v9, &v10, &v11, &v12);
	printf("%i %i %i %i %i %i %i %i %i %i %i %i %i ", digVer, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12);
	
	somaImpar = digVer+v2+v4+v6+v8+v10+v12;
	resultImpar = somaImpar/3;
	somaPar = v1+v3+v5+v7+v9+v11;
	resultPar = somaPar+resultImpar;
	
	if((digVer+resultPar)%10==0)
	{
		printf("S");
	}
	
	else
	{
		printf("N");
	}
	
	return 0;
}
