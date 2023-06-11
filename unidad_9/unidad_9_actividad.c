/* Actividad: Divide y Vencerás – Algoritmos Voraces */
/*1. Utilizando la técnica "divide y vencerás", desarrollar un algoritmo que, dado un vector de n elementos y un número entero m, determine si existe v[m]=m.*/

#include <stdio.h>
 

int busquedaBinariaRecursiva(int array[], int posizq, int posder, int elem)
{
    if (posder >= posizq) {
		/*Llamamos "pospivote" al elemento pivote*/
        int pospivote = posizq + ((posder - posizq) / 2);
 
		/*Caso Base*/
		/*Elemeto Conocido*/
        /*Si el elemento está en la mitad, lo duelvo*/
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
	/*int array;
	int i;
	printf("Ingrese cantidad de elementos\n")
	scanf("%d", &n);
	printf("Ingrese elemento %d\n", i)
	scanf("%d", &n);*/
    int array[] = {20, 30, 40, 100, 400};
    int posmitad = sizeof(array) / 2;
    int elemento = 100;
    int resultado = busquedaBinariaRecursiva(array, 0, posmitad - 1, elemento);
    (resultado == -1)
        ? printf("El elemento no está presente en el array")
        : printf("El elemento %d se encuentra en la posición %d", elemento, resultado);
    return 0;
}