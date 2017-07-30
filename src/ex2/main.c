#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10][20], sexo[10][1] ;
    int idade[10], indice;

    for(indice = 0; indice < 2; indice++)
    {
        printf("Informe seu primeiro nome:\n");
        scanf("%s", nome[indice]);
        printf("Informe seu sexo:\n");
        scanf("%s", sexo[indice]);
        printf("Informe sua idade:\n");
        scanf("%d", &idade[indice]);
    }edi

    printf("Pessoas do sexo feminino com idade maior que 21:\n");

    for (indice = 0; indice < 2; indice++)
    {
        if (sexo[indice][0] == 'f' || sexo[indice][0] == 'F')
        {
            if(idade[indice] > 21)
            {
                printf("%s\n",nome[indice]);
            }
        }
    }

    return 0;
}
