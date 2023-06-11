/* Ejemplo: Programación Dinámica */
/*Obtener los n primeros números primos*/

/*Recordar: un número primo es un número natural mayor que 1 que tiene únicamente dos divisores positivos distintos: él mismo y el 1*/

#include <stdio.h>
#include <stdlib.h>

void primos(int tabla[], int n)
{
    int i, j, nprimos;
    tabla[0] = 1;
    nprimos = 1;
    for(i = 2; nprimos <= n; i++)
    {
    	j = 1;
		/*Si ya lo encontramos previamente, no lo volvemos a calcular*/
    	while((j < nprimos) && (i % tabla[j] != 0))
    		j++;
    	if(j == nprimos)
    	{
    		printf("%d\t", i);
			/*Lo almacenamos en estructura para no tener que calcularlo nuevamente*/
    		tabla[nprimos] = i;
    		nprimos++;
    	}
    }
}
 

int main()
{
	int cantidad;

	printf("Ingrese la cantidad de números primos a obtener:\n");
	scanf("%d", &cantidad);
	
	int tabla[cantidad];

	printf("Números Primos:\t");
    primos(tabla, cantidad);
    return 0;
}