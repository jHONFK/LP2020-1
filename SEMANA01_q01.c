#include <stdio.h>

int main(void) {
  float valorCompra;

  printf("Informe o valor da compra\n");
  scanf("%f",&valorCompra);

  if (valorCompra>200)
  {
    printf("Valor final da compra:\nR$%.2f",valorCompra-(valorCompra*0.10));
  }

  else if (valorCompra>100 && valorCompra <200)
  {
    printf("Valor final da compra:\nR$%.2f",valorCompra-(valorCompra*0.05));
  }

  else
  {
    printf("\nValor final da compra:\nR$%.2f",valorCompra);
  }
}