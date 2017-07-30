#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,cont,result,cont_neg;
    cont = 0;
    result = 0;
    cont_neg = 0;
    while(cont < 10)
    {
        printf("Informe um numero:\n");
        scanf("%d", &num);
        if(num >= 0)
        {
            result = num+result;
        }
        else
        {
            cont_neg++;
        }
        cont++;
    }
    printf("A soma de numeros positivos e: %d\n", result);
    printf("Quantidade de numeros negativos e: %d\n", cont_neg);
    return 0;

}
