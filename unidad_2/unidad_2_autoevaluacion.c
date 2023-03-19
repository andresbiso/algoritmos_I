/*Autoevaluación: Análisis del tiempo de ejecución  */
/*1.*/
/*El tiempo de ejecución del siguiente código es:*/
/*
void intercambiar(int *x, int *y)
{
    int *aux;
    *aux = *x;
    *x = *y;
    *y = *aux;
}
*/

/*Implementación Ejemplo*/
#include <stdio.h>

void intercambiar(int *x, int *y)
{
    int *aux;
    *aux = *x;
    *x = *y;
    *y = *aux;
}

int main()
{
    int x, y;
    x = 10;
    y = 20;
    intercambiar(&x, &y);

    printf("x: %d \n", x);
    printf("y: %d \n", y);

    return 0;
}

/*Implementación Ejemplo - Modifcada para que funcione*/
#include <stdio.h>

void intercambiar(int *x, int *y)
{
    int *aux;
    aux = x;
    x = y;
    y = aux;
}

int main()
{
    int x, y;
    x = 10;
    y = 20;
    intercambiar(&x, &y);

    printf("x: %d \n", x);
    printf("y: %d \n", y);

    return 0;
}

/*Respuestas:
1. 10
2. 5n
3. 6
*/
/*Respuesta elegida: */

/*2.Para medir la eficiencia de un algoritmo, es necesario medir el tiempo que tarda su ejecución y la memoria que ocupa.*/
/*Respuestas: Verdadero o Falso*/

/*3.*/
/*El tiempo de ejecución del siguiente código es:*/

/*
 if (n % 2 == 0)
    {
        for (i = 1; i <= n; i++)
            x++;
    }
*/

/*Implementación Ejemplo*/
#include <stdio.h>

int funcion(int n)
{
    int i,x;
    x=0;
    if (n % 2 == 0)
    {
        for (i = 1; i <= n; i++)
            x++;
    }
    return x;
}

int main()
{
    int n, value;
    n = 10;
    value = funcion(n);

    printf("%d \n", value);

    return 0;
}

/*Respuestas:
1. 3+5n
2. 4+6n
3. 6+7n
*/
/*Respuesta elegida: */

/*4.¿Cuáles son los dos estudios posibles sobre el tiempo de ejecución de un algoritmo?*/
/*Respuesta:*/

/*5.*/
/*El tiempo de ejecución del siguiente código es:*/

/*
float sumatorio (int n)
{
    float suma = 0;
    for (i=1;i<=n;i++) 
        suma=suma+i;
    return suma;
}
*/

/*Implementación Ejemplo*/
#include <stdio.h>

float sumatorio (int n)
{
    int i;
    float suma = 0;
    for (i=1;i<=n;i++) 
        suma=suma+i;
    return suma;
}

int main()
{
    int n, value;
    n = 10;
    value = sumatorio(n);

    printf("%d \n", value);

    return 0;
}

/*
T(N)=3n^2+2n
¿Verdadero o Falso?
*/
/*Respuesta elegida: */