/*Actividad: Análisis del tiempo de ejecución*/
/*Detallar el tiempo de ejecución del siguiente código:*/
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
    printf("El programa ha finalizado con éxito");

    return 0;
}
