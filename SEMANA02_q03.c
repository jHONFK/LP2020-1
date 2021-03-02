#include <stdio.h>

int main(void) {
  float n1,n2,n3;

  printf("Informe o lado 1\n");
  scanf("%f",&n1);
  printf("Informe o lado 2\n");
  scanf("%f",&n2);
  printf("Informe o lado 3\n");
  scanf("%f",&n3);

  if(((n1>n2) && (n1>n3) && (n2+n3>n1)) ||
  ((n2>n1) && (n2>n3) && (n1+n3>n2)) ||
  ((n3>n1) && (n3>n2) && (n2+n1>n3)))
  {

    if(n1==n2 && n2==n3)
    {
       printf("EQUILATERO");
    }

    else if(n1==n2 || n1==n3 || n2==n3)
    {
      printf("ISOCELES");
    }

    else
    {
      printf("ESCALENO");
    }

  }

  else
  {
    printf("NAO FORMA");
  }
  
}