#include <stdio.h>

int main(void) {
  int n1,n2;
  printf("Digite um valor\n");
  scanf("%d",&n1);
  printf("Digite outro valor\n");
  scanf("%d",&n2);

  if(n1>n2)
  {
    printf("%d %d",n2,n1);
  }

  else
  {
    printf("%d %d",n1,n2);
  }
}