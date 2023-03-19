/* Actividad: Algoritmos recursivos */
/*1. Desarrollar un algoritmo que permita: */
/*a. Dados dos números enteros, A y B, calcular su potencia (A^B) en forma iterativa y recursiva. */
/*b. Cargar una matriz de nxn elementos enteros. Mostrarla. Calcular la suma de los elementos de la diagonal principal en forma iterativa y recursiva. */
/*1.a.*/
#include <stdio.h>

int potenciaRecursiva(int base, int exponente)
{
    if (exponente < 0)
    {
        return 0;
    }
    else if (exponente == 0)
    {
        return 1;
    }
    else
    {
        return base * potenciaRecursiva(base, exponente - 1);
    }
}

int potenciaIterativa(int base, int exponente)
{
    int valor = 1;

    if (exponente < 0)
    {
        return 0;
    }
    else if (exponente == 0)
    {
        return 1;
    }

    for (int i = 0; i < exponente; i++)
    {
        valor = valor * base;
    }

    return valor;
}

int main()
{
    int a, b, value;
    printf("Ingrese base:");
    scanf("%d", &a);
    printf("Ingrese exponente:");
    scanf("%d", &b);
    printf("Base: %d\n", a);
    printf("Exponente: %d\n", b);
    value = potenciaRecursiva(a, b);
    printf("Funcion Recursiva: %d\n", value);
    value = potenciaIterativa(a, b);
    printf("Funcion Iterativa: %d\n", value);
    return 0;
}

/*1.b.*/

#include <stdio.h>

/*Tratamos el array de dos dimensiones como un array de una sola dimensión*/
/*Ejemplo:
int mat[2][2]={{2,2}.{2,2}}
pasamo a tratarlo como:
mat[4]={2,2,2,2}*/
int sumaIterativa(int *mat, int filas)
{
    int suma = 0;
    for (int i = 0; i < filas; i++)
    {
        suma = suma + mat[i * filas + i];
        /*Ejemplo:
        i = 0
        mat[0*2+0] = mat[0]
        i = 1
        mat[1*2+1] = mat[3]
        Si verificamos con el array multidimensional
        vemos que estamos obteniendo el elemento de la diagonal principal
        en cada iteración*/
    }
    return suma;
}

/*Empieza del primer elemento de la diagonal principal y se mueve hacia el último*/
int sumaRecursiva(int *mat, int filas, int fila)
{
    if (fila == filas)
    {
        return 0;
    }
    else
    {
        return mat[fila * filas + fila] + sumaRecursiva(mat, filas, fila + 1);
    }
}

int main()
{
    int filas, i, j, suma;
    printf("Ingrese la cantidad de filas de la matriz nxn:\n");
    scanf("%d", &filas);

    int mat[filas][filas];

    printf("Ingresar valores de la matriz:\n");

    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < filas; j++)
        {
            int fila = i + 1;
            int columna = j + 1;
            printf("Ingresar valor %d x %d:\n", fila, columna);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nLa matriz es:\n");
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < filas; j++)
        {
            printf("%d", mat[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    suma = sumaIterativa(&mat[0][0], filas);
    printf("La suma iterativa de los elementos de la diagonal principal es: %d \n", suma);
    suma = sumaRecursiva(&mat[0][0], filas, 0);
    printf("La suma recursiva de los elementos de la diagonal principal es: %d \n", suma);

    return 0;
}
