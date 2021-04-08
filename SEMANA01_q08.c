#include <stdio.h>

int main()
{
	float posX, posY;
	scanf("%f",&posX);
	scanf("%f",&posY);
	
	if( ( (((posX-11) >= 58) && ((posX+11) <= 98)) || (((posX-11) >= 750) && ((posX+11) <= 790)) ) && 
	     ( ((posY-11) >= 204) && ((posY+11) <= 244) ) )
	{
		printf("GOLACO");
	}
	
	else if( (((posX-11) >= 58) && ((posX+11) <= 790)) && (((posY+11) <= 244)) )
	{
		printf("GOL");
	}
	
	else
	{
		printf("UHHH");
	}
	
}

