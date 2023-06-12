/* Actividad: Programación Dinámica */
/*1. Diseñar un algoritmo utilizando la técnica de programación dinámica para calcular si un número es perfecto*/
/*(la suma de todos sus divisores es igual al número sin incluirse).*/

#include<stdio.h>
 
int verificarPerfecto(int num)
{
	int i;
	int suma[num + 1];
	int cantdivisores;
	cantdivisores = 1;
	suma[0] = 0;
	suma[1] = 1;

	printf("--Obtenemos divisores de %d--\n", num);
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d es divisor de %d\n", i, num);
			cantdivisores++;
			suma[cantdivisores] = suma[cantdivisores - 1] + i;
		}
	}
 
	printf("--Suma de los divisores--\n");
	printf("Total: %d\n", suma[cantdivisores]);
	return suma[cantdivisores];
}

/*Ejemplo: 6, 28 y 496 son números perfecto*/
int main()
{
	int num;
	int resultado;

	printf("Ingresar numero:\n");
	scanf("%d",&num);

	resultado = verificarPerfecto(num);
	if(resultado == num)
	{
		printf("%d es un numero perfecto\n", num);
	}
	else if(resultado == -1)
	{
		printf("No se puede calcular el número perfecto de valores < 2\n");
	} else
	{
		printf("%d no es un numero perfecto\n", num);
	}
	return 0;
}