#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, tabuada;

    tabuada = 1;

    while (tabuada <= 5)
    {
        numero = 1;
        printf("TABUADA DE: %d\n", tabuada);
        while (numero <= 10)
        {
            printf("%d x %d = %d\n", tabuada, numero, tabuada*numero);
            numero++;
        }
        tabuada++;
    }

    return 0;
}
