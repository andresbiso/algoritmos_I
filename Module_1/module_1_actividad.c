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

    while (exponente > 0)
    {
        // verifico si es impar
        if ((exponente % 2) != 0)
            valor = valor * base;
        // devuelve parte entera
        exponente = exponente / 2;
        base = base * base;
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
    value = potenciaRecursiva(a, b);
    printf("Funcion Recursiva: %d\n", value);
    value = potenciaIterativa(a, b);
    printf("Funcion Iterativa: %d\n", value);
    return 0;
}

/*1.b.*/

#include <stdio.h>

int sumaIterativa(int filas, int mat[][filas]) {
    int suma = 0;
    for (int i = 0; i < filas; i++)
    {
        suma = suma + mat[i][i];
    }
    return suma;
}

int sumaRecursiva(int filas, int mat[][filas], int fila, int columna) {
    if (fila == 0 && columna == 0) {
        return mat[fila][columna];
    }
    if (columna == 0) {
        return mat[fila][columna] + sumaRecursiva(filas, mat, fila - 1, filas);
    }
    else {
        return mat[fila][columna] + sumaRecursiva(filas, mat, fila, columna - 1);
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

    suma = sumaIterativa(filas, mat);
    printf("La suma iterativa de los elementos de la diagonal principal es: %d \n", suma);
     suma = sumaRecursiva(filas, mat, 0, 0);
    printf("La suma recursiva de los elementos de la diagonal principal es: %d \n", suma);

    return 0;
}
