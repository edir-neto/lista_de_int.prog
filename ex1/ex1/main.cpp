#include <stdio.h>
#include <math.h>

int main()
{
    int num, cont, quadrado ;
    float raiz;

    cont = 1;
    while(cont <= 10){
        printf("Informe um numero:");
        scanf("%d", &num);
        raiz = sqrt(num);
        quadrado = pow(num, 2);
        printf("O numero e: %d\n", num);
        printf("Sua raiz quadrada e: %.1f\n", raiz);
        printf("Seu quadrado e: %d\n", quadrado);
        cont++;
    }

    return 0;
}
