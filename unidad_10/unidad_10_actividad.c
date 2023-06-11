/* Actividad: Programación Dinámica */
/*1. Diseñar un algoritmo utilizando la técnica de programación dinámica para calcular si un número es perfecto*/
/*(la suma de todos sus divisores es igual al número sin incluirse).*/

#include <stdio.h>
#include <stdlib.h>

void primos(int n, int tabla[])
{
    int i, j, nprimos;
    tabla[0] = 1;
    nprimos = 1;
    for(i = 2; nprimos<=n;i++)
    {
    	j = 1;
    	while((j < nprimos) && (i % tabla[j] != 0))
    		j++;
    	if(j == nprimos)
    	{
    		printf("%d\n", i);
    		tabla[nprimos] = i;
    		nprimos++;
    	}
    }
}
 

int main()
{
	int elemento;
	int tabla[20];

	printf("Ingrese el número a obtener sus primos:\n");
	scanf("%d", &elemento);

	printf("Primos de %d:\n", elemento);
    primos(elemento, tabla);
    return 0;
}