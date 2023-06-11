/* Actividad: Divide y Vencerás – Algoritmos Voraces */
/*1. Utilizando la técnica "divide y vencerás", desarrollar un algoritmo que, dado un vector de n elementos y un número entero m, determine si existe v[m]=m.*/

#include <stdio.h>
#include <stdlib.h>

int comparar_valores(const void* valorA, const void* valorB)
{
    return (*(int*)valorA - *(int*)valorB);
}
 
void ordenarArray(int array[], int cantidad)
{
    /*Utilizamos quick sort para ordenar el arreglo*/
    qsort(array, cantidad, sizeof(int), comparar_valores);
}

int busquedaBinariaRecursiva(int array[], int posizq, int posder, int elem)
{
    if (posder >= posizq) {
		/*Llamamos "pospivote" al elemento pivote*/
        int pospivote = posizq + ((posder - posizq) / 2);
 
		/*Caso Base*/
		/*Elemeto Conocido*/
        /*Si el elemento está en pospivote, lo devuelvo*/
        if (array[pospivote] == elem)
            return pospivote;
 
		/*Descomponemos en problemas más pequeños*/
        /*Si el elemento es más chico que el elemento pivote, entonces nos movemos a la izquierda*/
        if (array[pospivote] > elem)
            return busquedaBinariaRecursiva(array, posizq, pospivote - 1, elem);
 
        /*Si el elemento es más grande que el elemento pivote, entonces nos movemos a la derecha*/
        return busquedaBinariaRecursiva(array, pospivote + 1, posder, elem);
    }
 
    return -1;
}
 

int main()
{
	int cantidad;
	int i;
	int elemento;
	int posmitad;
	int resultado;

	/*Ejemplo: 5*/
	printf("Ingrese la cantidad de elementos del arreglo:\n");
	scanf("%d", &cantidad);

	int array[cantidad];

	/*Ejemplo: {2, 3, 4, 10, 40}*/
	printf("--Ingresar valores del arreglo--\n");

	for(i = 0; i < cantidad ; i++) {
		printf("Ingresar valor %d:\n", i);
		scanf("%d", &array[i]);	
	}
	
	printf("--El arreglo es--\n");
	printf("Pos\t");
	for(i = 0; i < cantidad ; i++)
	{
		printf("%d\t", i);
	}
	printf("\n");
	printf("Val\t");
	for(i = 0; i < cantidad ; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
	
	printf("--Ordenamos el arreglo para aplicar búsqueda binaria--\n");
	printf("Ordenando el arreglo...\n");

	ordenarArray(array, cantidad);
	
	printf("--El arreglo odenado es--\n");
	printf("Pos\t");
	for(i = 0; i < cantidad ; i++)
	{
		printf("%d\t", i);
	}
	printf("\n");
	printf("Val\t");
	for(i = 0; i < cantidad ; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
	
	/*Ejemplo: 10*/
	printf("Ingrese el elemento a buscar:\n");
	scanf("%d", &elemento);

    posmitad = sizeof(array) / 2;
    resultado = busquedaBinariaRecursiva(array, 0, posmitad - 1, elemento);
    (resultado == -1)
        ? printf("El elemento no está presente en el array\n")
        : printf("El elemento %d se encuentra en la posición %d\n", elemento, resultado);
    return 0;
}