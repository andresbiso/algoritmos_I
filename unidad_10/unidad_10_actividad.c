/* Actividad: Programación Dinámica */
/*1. Diseñar un algoritmo utilizando la técnica de programación dinámica para calcular si un número es perfecto*/
/*(la suma de todos sus divisores es igual al número sin incluirse).*/

#include<stdio.h>
 
int verificarPerfecto(int num)
{
	int i;
	int j;
	int suma;
	int cotaSuperior;
	int ndivisores;
	int arreglo[50];

	suma = 0;
	cotaSuperior = num/2;
	ndivisores = 0;
	printf("--Obtenemos divisores de %d--\n", num);
	for (i = 1; ndivisores <= cotaSuperior; i++)
	{
		j = 0;
		while((j < ndivisores) && (i % arreglo[j] == 0))
		{
			j++;
		}
		printf("soy j: %d\n", j);
		if(num % i == 0)
		{
			printf("%d es divisor de %d\n", i, num);
			suma += i;
			arreglo[ndivisores] = i;
			ndivisores++;
		}
	}
	printf("--Suma de los divisores--\n");
	printf("Total: %d\n", suma);
	if (suma == num)
	{
		return 0;	
	}
	else
	{
		return 1;
	}
}

/*Ejemplo: 6 es un número perfecto*/
int main()
{
	int num;

	printf("Ingresar numero:\n");
	scanf("%d",&num);

	if(verificarPerfecto(num) == 0)
	{
		printf("%d es un numero perfecto\n", num);
	}
	else
	{
		printf("%d no es un numero perfecto\n", num);
	}
	return 0;
}