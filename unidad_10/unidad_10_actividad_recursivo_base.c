/* Actividad: Programación Dinámica */
/*1. Diseñar un algoritmo utilizando la técnica de programación dinámica para calcular si un número es perfecto*/
/*(la suma de todos sus divisores es igual al número sin incluirse).*/

#include<stdio.h>
 
int verificarPerfecto(int num, int i)
{
	if (num < 2)
	{
		return -1;
	}

	/*Caso Base*/
	if (num == i)
	{
		return 0;
	}
	else if (num % i == 0)
	{
		return i + verificarPerfecto(num, i + 1);
	}
	else
	{
		return verificarPerfecto(num, i + 1);
	}
}

/*Ejemplo: 6 es un número perfecto*/
int main()
{
	int num;
	int resultado;

	printf("Ingresar numero:\n");
	scanf("%d",&num);

	resultado = verificarPerfecto(num, 1);
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