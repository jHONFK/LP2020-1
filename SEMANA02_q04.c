#include <stdio.h>

int main(void) {
  int c1,c2,c3;

  printf("Professor, informe o conceito\n");
  scanf("%d",&c1);
  printf("Professor, informe o conceito\n");
  scanf("%d",&c2);
  printf("Professor, informe o conceito\n");
  scanf("%d",&c3);

  if((c1==1 && c2==1) || (c2==1 && c3==1) || (c1==1 && c3==1))
  {
    printf("APROVADO COM A");
  }

  else if((c1==2 && c2==2) || (c2==2 && c3==2) || (c1==2 && c3==2))
  {
    printf("APROVADO COM B");
  }

  else if((c1==3 && c2==3) || (c2==3 && c3==3) || (c1==3 && c3==3))
  {
    printf("APROVADO COM C");
  }

  else if((c1==4 && c2==4) || (c2==4 && c3==4) || (c1==4 && c3==4))
  {
    printf("REPROVADO");
  }

  else
  {
    printf("INCONCLUSIVO");
  }


}