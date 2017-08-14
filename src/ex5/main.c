#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int num,cont,quadrado,quant_quadrados;

  quadrado = 0;
  cont = 0;
  num = 0;
  quant_quadrados = 0;
  while(cont < 3)
    {
  printf("ESCREVA UM NUMERO:\n");
  scanf("%d", &num);
  quadrado = pow(num,2);


  if(quadrado < 225)
    {
     printf("O quadrado e:%d\n", quadrado);
     quant_quadrados = quant_quadrados + quadrado;
    }
   else
    {
     printf("Numero invalido\n");
    }

     cont++;
  }

  printf("A soma dos quadrados e:%d\n", quant_quadrados);
    return 0;
}
