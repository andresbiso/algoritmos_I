/*Actividad: Analisis del tiempo de ejecucion*/
/*Detallar el tiempo de ejecución del siguiente codigo:*/
#include <stdio.h>

void proc(int n)
{
    int i, k;
    i = 1;
    while (i <= n)
    {
        k = i;
        while (k <= n)
            k++;
        k = 1;
        while (k <= i)
            k++;
        i++;
    }
}

int main()
{
    int n;
    n = 10;
    proc(10);
    printf("El programa ha finalizado");

    return 0;
}
