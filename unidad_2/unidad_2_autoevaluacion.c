/*Autoevaluación: Eficiencia de los algoritmos */
/*1.*/
/*Dada la siguiente función recursiva que suma los elementos de un arreglo de dimensión dim: */
int sumar(int vec[], int dim)
{
    if (dim == 0)
        return 0;
    else
        return sumar(vec, dim - 1) + vec[dim];
}

/*¿Es correcta esta función? */

/*Implementación Ejemplo*/
#include <stdio.h>

int sumar(int vec[], int dim)
{
    if (dim == 0)
        return 0;
    else
        return sumar(vec, dim - 1) + vec[dim];
}

int main()
{
    int numberArray[] = {2, 8, 4, 12};
    int dim = 4;
    int val = sumar(numberArray, dim);
    
    printf("%d", val);

    return 0;
}

/*Respuesta: */
/* Si bien la función realiza la suma al proveerle de un array de números enteros y una dimensión, 
no está del todo bien ya que se pierde el elemento en la posición 0 del Array.
Por lo tanto, propongo la siguiente resolución: */

/*Implementación Solución*/
#include <stdio.h>

int sumar(int vec[], int dim)
{
    if (dim < 0)
        return 0;
    else
        return sumar(vec, dim - 1) + vec[dim];
}

int main()
{
    int numberArray[] = {2, 8, 4, 12};
    int dim = 4;
    int val = sumar(numberArray, dim);
    
    printf("%d", val);

    return 0;
}


/*2.*/
/*¿Cuál es la salida del siguiente código? */
int f(int x)
{
    if (x > 100)
        return (x - 10);
    else
        return (f(f(x + 11)));
}

int main()
{
    int a = 99;
    printf("%d", f(a));
    return 0;
}

/*Seleccionar Respuesta: 89, 100, 91*/

/*Respuesta: 91*/
/*Explicación: Pasamos de 99 a 110, de 110 a 100, de 100 a 111, de 111 a 101 y de 101 a 91*/

/*3.*/
/*Dada la siguiente función:*/
void fun(int val)
{

    if (val > 1)
        fun(val / 2);
    printf("%d", val % 2);
}
/*Explicar qué salida produce esta función recursiva.*/

/*Implementación Ejemplo*/
#include <stdio.h>

void fun(int val)
{

    if (val > 1)
        fun(val / 2);
    printf("%d", val % 2);
}

int main()
{
    int a = 2;
    fun(a);
    return 0;
}

/*Respuesta:*/
/*Esta función recibe un valor entero por argumento y lo va dividiendo a la mitad hasta que el valor sea menor a 1.
Luego imprime por pantalla, utilizando el operador módulo, el resto de la división entre este número obtenido de las consecutivas divisiones y 2*/

/*4.*/
/*Dado el siguiente código: */
void f(int num, int div)
{
    if (num > 1)
    {
        if ((num % div) == 0)
        {
            f(num / div, div);
        }
        else
        {
            f(num, div + 1);
        }
    }
}

int main()
{
    f(7, 2);
    return 0;
}
/*La función recursiva no termina nunca. ¿Verdadero o Falso?*/

/*Respuesta: Falso*/
/*Explicación: Si ponemos un printf("%d", num % div), vemos el siguiente resultado: 113210. Al obtener 0 => pasa por f(num / div, div)
el cuál pasa como argumentos f(1,7). Luego como num == 1 => finaliza el programa*/
