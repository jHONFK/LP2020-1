#include <stdio.h>

int main()
{
	int valor, numDigito=0,restoCent=0, restoDeze=0, restoUni=0;
	
	
	scanf("%d",&valor);
	
	if(valor/1000 >= 1)
	{
		numDigito=4;
	}
	
	else if(valor/100 >= 1)
	{
		numDigito=3;
	}
	
	else if(valor/10 >= 1)
	{
		numDigito=2;
	}
	
	else
	{
		numDigito=1;
	}

	restoCent=valor%1000;
	restoDeze=restoCent%100;
	restoUni=restoDeze%10;

	switch(numDigito)
	{
		case 4:
			if(valor==1000)
			{
				printf("mil");
			}
			
			else if(valor>1000 && valor<2000)
			{
				printf("mil ");
				
				if(restoCent==900)
				{
					printf("e novecentos");
				}
				
				else if(restoCent>900 && restoCent<1000)
				{
					printf("novecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==800)
				{
					printf("e oitocentos");
				}
				
				else if(restoCent>800 && restoCent<900)
				{
					printf("oitocentos e ");
					
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
					
					
				
				
				else if(restoCent==700)
				{
					printf("e setecentos");
				}
				
				else if(restoCent>700 && restoCent<800)
				{
					printf("setecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==600)
				{
					printf("e seiscentos");
				}
				
				else if(restoCent>600 && restoCent<700)
				{
					printf("seiscentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==500)
				{
					printf("e quinhentos");
				}
				
				else if(restoCent>500 && restoCent<600)
				{
					printf("quinhentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==400)
				{
					printf("e quatrocentos");
				}
				
				else if(restoCent>400 && restoCent<500)
				{
					printf("quatrocentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==300)
				{
					printf("e trezentos");
				}
				
				else if(restoCent>300 && restoCent<400)
				{
					printf("trezentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==200)
				{
					printf("e duzentos");
				}
				
				else if(restoCent>200 && restoCent<300)
				{
					printf("duzentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==100)
				{
					printf("e cem");
				}
				
				else if(restoCent>100 && restoCent<200)
				{
					printf("cento e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent<100)
				{
					if(restoDeze==90)
					{
						printf("e noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("e noventa e ");
							
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("e oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("e oitenta e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("e setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("e setenta e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("e sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("e trinta e ");
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("e vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("e vinte e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("e dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("e dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("e dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("e dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("e quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("e quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("e treze");
					}
					
					else if(restoDeze==12)
					{
						printf("e doze");
					}
					
					else if(restoDeze==11)
					{
						printf("e onze");
					}
					
					else if(restoDeze==10)
					{
						printf("e dez");
					}
					
					else if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
				}
				
			}
			
			else if(valor==2000)
			{
				printf("dois mil");
			}
			
			else if(valor>2000 && valor<3000)
			{
				printf("dois mil ");
				
				if(restoCent==900)
				{
					printf("e novecentos");
				}
				
				else if(restoCent>900 && restoCent<1000)
				{
					printf("novecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==800)
				{
					printf("e oitocentos");
				}
				
				else if(restoCent>800 && restoCent<900)
				{
					printf("oitocentos e ");
					
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
					
					
				
				
				else if(restoCent==700)
				{
					printf("e setecentos");
				}
				
				else if(restoCent>700 && restoCent<800)
				{
					printf("setecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==600)
				{
					printf("e seiscentos");
				}
				
				else if(restoCent>600 && restoCent<700)
				{
					printf("seiscentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==500)
				{
					printf("e quinhentos");
				}
				
				else if(restoCent>500 && restoCent<600)
				{
					printf("quinhentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==400)
				{
					printf("e quatrocentos");
				}
				
				else if(restoCent>400 && restoCent<500)
				{
					printf("quatrocentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==300)
				{
					printf("e trezentos");
				}
				
				else if(restoCent>300 && restoCent<400)
				{
					printf("trezentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==200)
				{
					printf("e duzentos");
				}
				
				else if(restoCent>200 && restoCent<300)
				{
					printf("duzentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==100)
				{
					printf("e cem");
				}
				
				else if(restoCent>100 && restoCent<200)
				{
					printf("cento e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent<100)
				{
					if(restoDeze==90)
					{
						printf("e noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("e noventa e ");
							
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("e oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("e oitenta e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("e setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("e setenta e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("e sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("e trinta e ");
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("e vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("e vinte e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("e dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("e dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("e dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("e dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("e quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("e quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("e treze");
					}
					
					else if(restoDeze==12)
					{
						printf("e doze");
					}
					
					else if(restoDeze==11)
					{
						printf("e onze");
					}
					
					else if(restoDeze==10)
					{
						printf("e dez");
					}
					
					else if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
				}
				
			}
			
			else if(valor==3000)
			{
				printf("tres mil");
			}
			
			else if(valor>3000 && valor<4000)
			{
				printf("tres mil ");
				
				if(restoCent==900)
				{
					printf("e novecentos");
				}
				
				else if(restoCent>900 && restoCent<1000)
				{
					printf("novecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==800)
				{
					printf("e oitocentos");
				}
				
				else if(restoCent>800 && restoCent<900)
				{
					printf("oitocentos e ");
					
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
					
					
				
				
				else if(restoCent==700)
				{
					printf("e setecentos");
				}
				
				else if(restoCent>700 && restoCent<800)
				{
					printf("setecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==600)
				{
					printf("e seiscentos");
				}
				
				else if(restoCent>600 && restoCent<700)
				{
					printf("seiscentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==500)
				{
					printf("e quinhentos");
				}
				
				else if(restoCent>500 && restoCent<600)
				{
					printf("quinhentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==400)
				{
					printf("e quatrocentos");
				}
				
				else if(restoCent>400 && restoCent<500)
				{
					printf("quatrocentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==300)
				{
					printf("e trezentos");
				}
				
				else if(restoCent>300 && restoCent<400)
				{
					printf("trezentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==200)
				{
					printf("e duzentos");
				}
				
				else if(restoCent>200 && restoCent<300)
				{
					printf("duzentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==100)
				{
					printf("e cem");
				}
				
				else if(restoCent>100 && restoCent<200)
				{
					printf("cento e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent<100)
				{
					if(restoDeze==90)
					{
						printf("e noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("e noventa e ");
							
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("e oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("e oitenta e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("e setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("e setenta e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("e sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("e trinta e ");
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("e vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("e vinte e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("e dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("e dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("e dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("e dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("e quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("e quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("e treze");
					}
					
					else if(restoDeze==12)
					{
						printf("e doze");
					}
					
					else if(restoDeze==11)
					{
						printf("e onze");
					}
					
					else if(restoDeze==10)
					{
						printf("e dez");
					}
					
					else if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
				}
				
			}
			
			else if(valor==4000)
			{
				printf("quatro mil");
			}
			
			else if(valor>4000 && valor<5000)
			{
				printf("quatro mil ");
				
				if(restoCent==900)
				{
					printf("e novecentos");
				}
				
				else if(restoCent>900 && restoCent<1000)
				{
					printf("novecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==800)
				{
					printf("e oitocentos");
				}
				
				else if(restoCent>800 && restoCent<900)
				{
					printf("oitocentos e ");
					
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
					
					
				
				
				else if(restoCent==700)
				{
					printf("e setecentos");
				}
				
				else if(restoCent>700 && restoCent<800)
				{
					printf("setecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==600)
				{
					printf("e seiscentos");
				}
				
				else if(restoCent>600 && restoCent<700)
				{
					printf("seiscentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==500)
				{
					printf("e quinhentos");
				}
				
				else if(restoCent>500 && restoCent<600)
				{
					printf("quinhentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==400)
				{
					printf("e quatrocentos");
				}
				
				else if(restoCent>400 && restoCent<500)
				{
					printf("quatrocentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==300)
				{
					printf("e trezentos");
				}
				
				else if(restoCent>300 && restoCent<400)
				{
					printf("trezentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==200)
				{
					printf("e duzentos");
				}
				
				else if(restoCent>200 && restoCent<300)
				{
					printf("duzentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==100)
				{
					printf("e cem");
				}
				
				else if(restoCent>100 && restoCent<200)
				{
					printf("cento e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent<100)
				{
					if(restoDeze==90)
					{
						printf("e noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("e noventa e ");
							
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("e oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("e oitenta e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("e setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("e setenta e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("e sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("e trinta e ");
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("e vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("e vinte e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("e dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("e dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("e dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("e dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("e quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("e quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("e treze");
					}
					
					else if(restoDeze==12)
					{
						printf("e doze");
					}
					
					else if(restoDeze==11)
					{
						printf("e onze");
					}
					
					else if(restoDeze==10)
					{
						printf("e dez");
					}
					
					else if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
				}
				
			}
			
			else if(valor==5000)
			{
				printf("cinco mil");
			}
			
			else if(valor>5000 && valor<6000)
			{
				printf("cinco mil ");
				
				if(restoCent==900)
				{
					printf("e novecentos");
				}
				
				else if(restoCent>900 && restoCent<1000)
				{
					printf("novecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==800)
				{
					printf("e oitocentos");
				}
				
				else if(restoCent>800 && restoCent<900)
				{
					printf("oitocentos e ");
					
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
					
					
				
				
				else if(restoCent==700)
				{
					printf("e setecentos");
				}
				
				else if(restoCent>700 && restoCent<800)
				{
					printf("setecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==600)
				{
					printf("e seiscentos");
				}
				
				else if(restoCent>600 && restoCent<700)
				{
					printf("seiscentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==500)
				{
					printf("e quinhentos");
				}
				
				else if(restoCent>500 && restoCent<600)
				{
					printf("quinhentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==400)
				{
					printf("e quatrocentos");
				}
				
				else if(restoCent>400 && restoCent<500)
				{
					printf("quatrocentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==300)
				{
					printf("e trezentos");
				}
				
				else if(restoCent>300 && restoCent<400)
				{
					printf("trezentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==200)
				{
					printf("e duzentos");
				}
				
				else if(restoCent>200 && restoCent<300)
				{
					printf("duzentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==100)
				{
					printf("e cem");
				}
				
				else if(restoCent>100 && restoCent<200)
				{
					printf("cento e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent<100)
				{
					if(restoDeze==90)
					{
						printf("e noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("e noventa e ");
							
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("e oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("e oitenta e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("e setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("e setenta e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("e sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("e trinta e ");
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("e vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("e vinte e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("e dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("e dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("e dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("e dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("e quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("e quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("e treze");
					}
					
					else if(restoDeze==12)
					{
						printf("e doze");
					}
					
					else if(restoDeze==11)
					{
						printf("e onze");
					}
					
					else if(restoDeze==10)
					{
						printf("e dez");
					}
					
					else if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
				}
				
			}
			
			else if(valor==6000)
			{
				printf("seis mil");
			}
			
			else if(valor>6000 && valor<7000)
			{
				printf("seis mil ");
				
				if(restoCent==900)
				{
					printf("e novecentos");
				}
				
				else if(restoCent>900 && restoCent<1000)
				{
					printf("novecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==800)
				{
					printf("e oitocentos");
				}
				
				else if(restoCent>800 && restoCent<900)
				{
					printf("oitocentos e ");
					
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
					
					
				
				
				else if(restoCent==700)
				{
					printf("e setecentos");
				}
				
				else if(restoCent>700 && restoCent<800)
				{
					printf("setecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==600)
				{
					printf("e seiscentos");
				}
				
				else if(restoCent>600 && restoCent<700)
				{
					printf("seiscentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==500)
				{
					printf("e quinhentos");
				}
				
				else if(restoCent>500 && restoCent<600)
				{
					printf("quinhentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==400)
				{
					printf("e quatrocentos");
				}
				
				else if(restoCent>400 && restoCent<500)
				{
					printf("quatrocentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==300)
				{
					printf("e trezentos");
				}
				
				else if(restoCent>300 && restoCent<400)
				{
					printf("trezentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==200)
				{
					printf("e duzentos");
				}
				
				else if(restoCent>200 && restoCent<300)
				{
					printf("duzentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==100)
				{
					printf("e cem");
				}
				
				else if(restoCent>100 && restoCent<200)
				{
					printf("cento e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent<100)
				{
					if(restoDeze==90)
					{
						printf("e noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("e noventa e ");
							
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("e oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("e oitenta e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("e setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("e setenta e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("e sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("e trinta e ");
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("e vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("e vinte e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("e dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("e dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("e dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("e dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("e quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("e quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("e treze");
					}
					
					else if(restoDeze==12)
					{
						printf("e doze");
					}
					
					else if(restoDeze==11)
					{
						printf("e onze");
					}
					
					else if(restoDeze==10)
					{
						printf("e dez");
					}
					
					else if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
				}
				
			}
			
			else if(valor==7000)
			{
				printf("sete mil");
			}
			
			else if(valor>7000 && valor<8000)
			{
				printf("sete mil ");
				
				if(restoCent==900)
				{
					printf("e novecentos");
				}
				
				else if(restoCent>900 && restoCent<1000)
				{
					printf("novecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==800)
				{
					printf("e oitocentos");
				}
				
				else if(restoCent>800 && restoCent<900)
				{
					printf("oitocentos e ");
					
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
					
					
				
				
				else if(restoCent==700)
				{
					printf("e setecentos");
				}
				
				else if(restoCent>700 && restoCent<800)
				{
					printf("setecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==600)
				{
					printf("e seiscentos");
				}
				
				else if(restoCent>600 && restoCent<700)
				{
					printf("seiscentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==500)
				{
					printf("e quinhentos");
				}
				
				else if(restoCent>500 && restoCent<600)
				{
					printf("quinhentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==400)
				{
					printf("e quatrocentos");
				}
				
				else if(restoCent>400 && restoCent<500)
				{
					printf("quatrocentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==300)
				{
					printf("e trezentos");
				}
				
				else if(restoCent>300 && restoCent<400)
				{
					printf("trezentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==200)
				{
					printf("e duzentos");
				}
				
				else if(restoCent>200 && restoCent<300)
				{
					printf("duzentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==100)
				{
					printf("e cem");
				}
				
				else if(restoCent>100 && restoCent<200)
				{
					printf("cento e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent<100)
				{
					if(restoDeze==90)
					{
						printf("e noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("e noventa e ");
							
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("e oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("e oitenta e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("e setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("e setenta e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("e sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("e trinta e ");
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("e vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("e vinte e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("e dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("e dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("e dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("e dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("e quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("e quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("e treze");
					}
					
					else if(restoDeze==12)
					{
						printf("e doze");
					}
					
					else if(restoDeze==11)
					{
						printf("e onze");
					}
					
					else if(restoDeze==10)
					{
						printf("e dez");
					}
					
					else if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
				}
				
			}
			
			else if(valor==8000)
			{
				printf("oito mil");
			}
			
			else if(valor>8000 && valor<9000)
			{
				printf("oito mil ");
				
				if(restoCent==900)
				{
					printf("e novecentos");
				}
				
				else if(restoCent>900 && restoCent<1000)
				{
					printf("novecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==800)
				{
					printf("e oitocentos");
				}
				
				else if(restoCent>800 && restoCent<900)
				{
					printf("oitocentos e ");
					
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
					
					
				
				
				else if(restoCent==700)
				{
					printf("e setecentos");
				}
				
				else if(restoCent>700 && restoCent<800)
				{
					printf("setecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==600)
				{
					printf("e seiscentos");
				}
				
				else if(restoCent>600 && restoCent<700)
				{
					printf("seiscentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==500)
				{
					printf("e quinhentos");
				}
				
				else if(restoCent>500 && restoCent<600)
				{
					printf("quinhentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==400)
				{
					printf("e quatrocentos");
				}
				
				else if(restoCent>400 && restoCent<500)
				{
					printf("quatrocentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==300)
				{
					printf("e trezentos");
				}
				
				else if(restoCent>300 && restoCent<400)
				{
					printf("trezentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==200)
				{
					printf("e duzentos");
				}
				
				else if(restoCent>200 && restoCent<300)
				{
					printf("duzentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==100)
				{
					printf("e cem");
				}
				
				else if(restoCent>100 && restoCent<200)
				{
					printf("cento e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent<100)
				{
					if(restoDeze==90)
					{
						printf("e noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("e noventa e ");
							
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("e oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("e oitenta e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("e setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("e setenta e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("e sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("e trinta e ");
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("e vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("e vinte e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("e dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("e dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("e dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("e dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("e quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("e quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("e treze");
					}
					
					else if(restoDeze==12)
					{
						printf("e doze");
					}
					
					else if(restoDeze==11)
					{
						printf("e onze");
					}
					
					else if(restoDeze==10)
					{
						printf("e dez");
					}
					
					else if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
				}
				
			}
			
			else if(valor==9000)
			{
				printf("nove mil");
			}
			
			else if(valor>9000 && valor<9999)
			{
				printf("nove mil ");
				
				if(restoCent==900)
				{
					printf("e novecentos");
				}
				
				else if(restoCent>900 && restoCent<1000)
				{
					printf("novecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==800)
				{
					printf("e oitocentos");
				}
				
				else if(restoCent>800 && restoCent<900)
				{
					printf("oitocentos e ");
					
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
					
					
				
				
				else if(restoCent==700)
				{
					printf("e setecentos");
				}
				
				else if(restoCent>700 && restoCent<800)
				{
					printf("setecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==600)
				{
					printf("e seiscentos");
				}
				
				else if(restoCent>600 && restoCent<700)
				{
					printf("seiscentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==500)
				{
					printf("e quinhentos");
				}
				
				else if(restoCent>500 && restoCent<600)
				{
					printf("quinhentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==400)
				{
					printf("e quatrocentos");
				}
				
				else if(restoCent>400 && restoCent<500)
				{
					printf("quatrocentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==300)
				{
					printf("e trezentos");
				}
				
				else if(restoCent>300 && restoCent<400)
				{
					printf("trezentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==200)
				{
					printf("e duzentos");
				}
				
				else if(restoCent>200 && restoCent<300)
				{
					printf("duzentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==100)
				{
					printf("e cem");
				}
				
				else if(restoCent>100 && restoCent<200)
				{
					printf("cento e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent<100)
				{
					if(restoDeze==90)
					{
						printf("e noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("e noventa e ");
							
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("e oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("e oitenta e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("e setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("e setenta e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("e sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("e trinta e ");
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("e vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("e vinte e ");
						
					if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("e dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("e dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("e dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("e dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("e quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("e quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("e treze");
					}
					
					else if(restoDeze==12)
					{
						printf("e doze");
					}
					
					else if(restoDeze==11)
					{
						printf("e onze");
					}
					
					else if(restoDeze==10)
					{
						printf("e dez");
					}
					
					else if(restoUni==9)
					{
						printf("e nove");
					}
					
					else if(restoUni==8)
					{
						printf("e oito");
					}
					
					else if(restoUni==7)
					{
						printf("e sete");
					}
					
					else if(restoUni==6)
					{
						printf("e seis");
					}
					
					else if(restoUni==5)
					{
						printf("e cinco");
					}
					
					else if(restoUni==4)
					{
						printf("e quatro");
					}
					
					else if(restoUni==3)
					{
						printf("e tres");
					}
					
					else if(restoUni==2)
					{
						printf("e dois");
					}
					
					else if(restoUni==1)
					{
						printf("e um");
					}
				}
				
				
			}
				break;	
			case 3:
				if(restoCent==900)
				{
					printf("novecentos");
				}
				
				else if(restoCent>900 && restoCent<1000)
				{
					printf("novecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==800)
				{
					printf("oitocentos");
				}
				
				else if(restoCent>800 && restoCent<900)
				{
					printf("oitocentos e ");
					
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
					
					
				
				
				else if(restoCent==700)
				{
					printf("setecentos");
				}
				
				else if(restoCent>700 && restoCent<800)
				{
					printf("setecentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==600)
				{
					printf("seiscentos");
				}
				
				else if(restoCent>600 && restoCent<700)
				{
					printf("seiscentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==500)
				{
					printf("quinhentos");
				}
				
				else if(restoCent>500 && restoCent<600)
				{
					printf("quinhentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==400)
				{
					printf("quatrocentos");
				}
				
				else if(restoCent>400 && restoCent<500)
				{
					printf("quatrocentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==300)
				{
					printf("trezentos");
				}
				
				else if(restoCent>300 && restoCent<400)
				{
					printf("trezentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==200)
				{
					printf("duzentos");
				}
				
				else if(restoCent>200 && restoCent<300)
				{
					printf("duzentos e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				
				else if(restoCent==100)
				{
					printf("cem");
				}
				
				else if(restoCent>100 && restoCent<200)
				{
					printf("cento e ");
					
					if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					
					else if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
				}
				break;
				case 2:
										if(restoDeze==90)
					{
						printf("noventa");
					}
					
					else if(restoDeze>90 && restoDeze<100)
					{
						printf("noventa e ");
							
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
							
					}
					
					else if(restoDeze==80)
					{
						printf("oitenta");
					}
					
					else if(restoDeze>80 && restoDeze<90)
					{
						printf("oitenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==70)
					{
						printf("setenta");
					}
					
					else if(restoDeze>70 && restoDeze<80)
					{
						printf("setenta e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==60)
					{
						printf("sessenta");
					}
					
					else if(restoDeze>60 && restoDeze<70)
					{
						printf("sessenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==50)
					{
						printf("cinquenta");
					}
					
					else if(restoDeze>50 && restoDeze<60)
					{
						printf("cinquenta e ");
						
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==40)
					{
						printf("quarenta");
					}
					
					else if(restoDeze>40 && restoDeze<50)
					{
						printf("quarenta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==30)
					{
						printf("trinta");
					}
					
					else if(restoDeze>30 && restoDeze<40)
					{
						printf("trinta e ");
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==20)
					{
						printf("vinte");
					}
					
					else if(restoDeze>20 && restoDeze<30)
					{
						printf("vinte e ");
						
					if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
					}
					
					else if(restoDeze==19)
					{
						printf("dezenove");
					}
					
					else if(restoDeze==18)
					{
						printf("dezoito");
					}
					
					else if(restoDeze==17)
					{
						printf("dezessete");
					}
					
					else if(restoDeze==16)
					{
						printf("dezesseis");
					}
					
					else if(restoDeze==15)
					{
						printf("quinze");
					}
					
					else if(restoDeze==14)
					{
						printf("quatorze");
					}
					
					else if(restoDeze==13)
					{
						printf("treze");
					}
					
					else if(restoDeze==12)
					{
						printf("doze");
					}
					
					else if(restoDeze==11)
					{
						printf("onze");
					}
					
					else if(restoDeze==10)
					{
						printf("dez");
					}
					break;
					case 1:
						if(restoUni==9)
					{
						printf("nove");
					}
					
					else if(restoUni==8)
					{
						printf("oito");
					}
					
					else if(restoUni==7)
					{
						printf("sete");
					}
					
					else if(restoUni==6)
					{
						printf("seis");
					}
					
					else if(restoUni==5)
					{
						printf("cinco");
					}
					
					else if(restoUni==4)
					{
						printf("quatro");
					}
					
					else if(restoUni==3)
					{
						printf("tres");
					}
					
					else if(restoUni==2)
					{
						printf("dois");
					}
					
					else if(restoUni==1)
					{
						printf("um");
					}
						break;
}

			
		
}

			
			
			

	

