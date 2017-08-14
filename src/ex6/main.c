#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,quant_num,cont,maior,menor;

    cont = 0;
    printf("Quantos numeros deseja digitar:\n");
    scanf("%d", &quant_num);
    while(cont < quant_num )
    {
        printf("Informe um numero:\n");
        scanf("%d", &num);
        if(cont == 0)
        {
            maior = num;
            menor = num;
        }
        else
        {
            if(num < menor)
            {
                menor = num;
            }
            else if(num > maior)
            {
                maior = num;
            }
        }
        cont++;
    }
    printf("O numero menor e:%d\n", menor);
    printf("O numero maior e:%d\n", maior);

    return 0;
}
