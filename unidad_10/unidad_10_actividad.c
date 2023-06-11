/* Actividad: Programación Dinámica */
/*1. Diseñar un algoritmo utilizando la técnica de programación dinámica para calcular si un número es perfecto*/
/*(la suma de todos sus divisores es igual al número sin incluirse).*/

#include<stdio.h>
 
int verificarPerfecto(int num)
{
	int i;
	int suma;

	suma = 0;
	for (i = 1; i <= (num/2); i++)
	{
		if(num % i == 0)
			suma += i;
	}
	if (suma == num)
		return 0;
	else
		return 1;
}

/*Ejemplo: 6 es un número perfecto*/
int main()
{
	int num;

	printf("Ingresar número:\n");
	scanf("%d",&num);

	if(verificarPerfecto(num) == 0)
		printf("%d es un número perfecto\n", num);
	else
		printf("%d no es un número perfecto\n", num);
	return 0;
}