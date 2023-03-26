/*Guía de Ejercicios - Unidad 2*/
/*1.Calcular el tiempo de ejecución de cada ítem:*/

/*a.*/
/*
j=k-2;
i=j*12;
printf("%d\n",i);
*/

#include <stdio.h>

int main()
{
    int i, j, k;
    k = 10;
    j = k - 2;
    i = j * 12;
    printf("%d\n", i);
    printf("El programa ha finalizado con éxito");

    return 0;
}

/*b.*/
/*
for (i=0;i<n;i++)
    printf("%d\n",i)
*/

#include <stdio.h>

int main()
{
    int i, n;
    n = 10;
    for (i = 0; i < n; i++)
        printf("%d\n", i)
            printf("El programa ha finalizado con éxito");

    return 0;
}

/*c.*/
/*
for (i=0;i<10;i++)
    for (j=0;j<n;j++)
        printf("%d\n",i+j)
*/

#include <stdio.h>

int main()
{
    int i, j, n;
    n = 10;
    for (i = 0; i < 10; i++)
        for (j = 0; j < n; j++)
            printf("%d\n", i + j)
                printf("El programa ha finalizado con éxito");

    return 0;
}

/*d.*/
/*
for (i=0;i<100;i++)
    q=i+j;
*/

#include <stdio.h>

int main()
{
    int i, j, q;
    j = 10;
    for (i = 0; i < 100; i++)
        q = i + j;
    printf("El programa ha finalizado con éxito");

    return 0;
}

/*e.*/
/*
for (i=0;i<n;i++)
    for (j=0;j<n;j++)
        for (k=0;k<n;k++)
        {
            q=i+j*k;
            printf("%d\n",q);
        }
*/

#include <stdio.h>

int main()
{
    int i, j, k, q;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            for (k = 0; k < n; k++)
            {
                q = i + j * k;
                printf("%d\n", q);
            }
    printf("El programa ha finalizado con éxito");

    return 0;
}

/*f.*/
/*
for (i=1;i<=n;i++)
{
    printf("%d\n",i);
    for (j=n;j>0;j--)
        for (k=0;k<n-10;k++)
            q=i+2j*k;
}
*/
/*Supongo que en esta sentencia falto un *: q=i+2*j*k;*/

#include <stdio.h>

int main()
{
    int i, j, k, q;
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
        for (j = n; j > 0; j--)
            for (k = 0; k < n - 10; k++)
                q = i + 2 * j * k;
    }
    printf("El programa ha finalizado con éxito");

    return 0;
}

/*g.*/
/*
for (i=0;i<n;i++)
    for (j=0;j<n;j++)
        acum+=A[i][j];
k=0;
while (k<n)
{
    acum-=k;
    k++;
}
*/

#include <stdio.h>

int main()
{
    int i, j, k, n, acum;
    n = 10;
    int A[n][n];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            acum += A[i][j];
    k = 0;
    while (k < n)
    {
        acum -= k;
        k++;
    }
    printf("El programa ha finalizado con éxito");

    return 0;
}

/*h.*/
/*
i=1;
while (i*i<n)
    i++;
*/

#include <stdio.h>

int main()
{
    int i, n;
    n = 10;
    i = 1;
    while (i * i < n)
        i++;
    printf("El programa ha finalizado con éxito");

    return 0;
}

/*i.*/
/*
i=n;
while (i>1)
{
    printf("%d",i);
    i/=2;
}
*/

#include <stdio.h>

int main()
{
    int i, n;
    n = 10;
    i = n;
    while (i > 1)
    {
        printf("%d", i);
        i /= 2;
    }
    printf("\n");
    printf("El programa ha finalizado con éxito");

    return 0;
}

/*2.Desarrollar  un  algoritmo  que  calcule  la  sumatoria  de  los  primeros  n  números  naturales.*/
/*Calcular su tiempo de ejecución.*/

#include <stdio.h>

int main()
{
    int n, i, accum;
    accum = 0;
    printf("Ingrese la cantidad de enteros a sumar:\n");
    scanf("%d", &n);

    i = 1;
    while (i <= n)
    {
        accum = accum + i;
        i++;
    }

    printf("Resultado: %d\n", accum);

    return 0;
}

/*3.Desarrollar  un  algoritmo  iterativo  que  calcule  la  división  entre  dos  números  enteros  por restas sucesivas.*/
/*Calcular su tiempo de ejecución.*/

#include <stdio.h>

int main()
{
    int dividendo, divisor, resto, cociente;

    printf("Ingrese dividendo:\n");
    scanf("%d", &dividendo);

    printf("Ingrese divisor:\n");
    scanf("%d", &divisor);

    resto = dividendo;
    cociente = 0;
    while (resto >= divisor)
    {
        resto = resto - divisor;
        cociente = cociente + 1;
    }
    printf("cociente: %d\n", cociente);

    return 0;
}

/*4.Desarrollar un algoritmo para calcular la media de un vector de n elementos. Luego, calcular su tiempo de ejecución.*/

#include <stdio.h>

int main()
{
    int i, len, accum;

    printf("Ingrese largo del array:\n");
    scanf("%d", &len);
    int array[len];

    i = 0;
    while (i < len)
    {
        printf("Ingrese valor %d del array:\n", i + 1);
        scanf("%d", &array[i]);
        i++;
    }

    i = 0;
    while (i < len)
    {
        accum = accum + array[i];
        i++;
    }

    printf("Media del vector: %d\n", accum / len);
    return 0;
}

/*5.Desarrollar un algoritmo para calcular el elemento máximo de un vector,y luego calcular su tiempo de ejecución.*/
#include <stdio.h>

int main()
{
    int i, len, max;

    printf("Ingrese largo del array:\n");
    scanf("%d", &len);
    int array[len];

    i = 0;
    while (i < len)
    {
        printf("Ingrese valor %d del array:\n", i + 1);
        scanf("%d", &array[i]);
        i++;
    }

    i = 0;
    max = array[0];
    while (i < len)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        i++;
    }

    printf("Elemento máximo del vector: %d\n", max);
    return 0;
}