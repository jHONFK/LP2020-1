#include <stdio.h>

int main(void) {
  int n1,n2,maior,menor;

  printf("Informe o valor 1\n");
  scanf("%d",&n1);
  printf("Informe o valor 2\n");
  scanf("%d",&n2);

  if((n2+1==n1))
  printf("%d ,%d ,%d, %d",n1-1,n1+1,n2-1,n2+1);
  
  else
  {
    printf("%d ,%d ,%d ,%d ,%d ,%d",n1-1,n1,n1+1,n2-1,n2,n2+2);
  }  

}