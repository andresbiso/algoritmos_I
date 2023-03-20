/*Guía de Ejercicios - Unidad 1*/
/*1.Diseñar un algoritmo recursivo e iterativo que devuelva la suma de los primeros N enteros*/
#include <stdio.h>

int obtenerSumaEnterosIterativo(int n)
{
    int i, accum;
    accum = 0;
    for (i = 1; i <= n; i++)
    {
        accum = accum + i;
    }
    return accum;
}

int obtenerSumaEnterosRecursivo(int n)
{
    if (n < 0)
    {
        return 0;
    }

    return n + obtenerSumaEnterosRecursivo(n - 1);
}

int main()
{
    int num, result;
    printf("Ingrese la cantidad de enteros a sumar:\n");
    scanf("%d", &num);
    result = obtenerSumaEnterosIterativo(num);
    printf("Forma iterativa: %d\n", result);
    result = obtenerSumaEnterosRecursivo(num);
    printf("Forma recursiva: %d\n", result);
    return 0;
}

/*2.Diseñar un algoritmo recursivo que encuentre la suma de los enteros positivos pares desde N hasta 2. Si N es impar imprimirun mensaje de error.*/

/*3.Diseñar un algoritmo recursivo e iterativo que permita hacer la división por restas sucesivas.*/

/*4.Diseñar un algoritmo recursivo que permita invertir un número.*/
/*Ejemplo: Entrada: 123 Salida: 321*/

/*5.Diseñar un algoritmo recursivo que permita sumar los dígitos de un número.*/
/*Ejemplo: Entrada: 123 Resultado:6*/

/*6.Diseñar un algoritmo recursivo que permita multiplicar los elementos de un vector.*/

/*7.Diseñar un algoritmo recursivo que muestre el númeromenor de un vector*/

/*8.Diseñar un algoritmo recursivo que calcule el coeficiente binomial.*/

/*9.Dado el siguiente algoritmo recursivo:*/

/*
void f(int num, int div)
{
    if (num > 1) {
        if ((num%div) == 0) {
            System.out.println(div);
            f(num/div,div);
        } else {
            f(num,div+1);
        }
    }
}
*/

/*a.Dado un numero cualquiera x,  ¿cuál es la salida de f(x,2)?*/
/*b.Implementar un algoritmo iterativo equivalente.*/

/*10.Diseñar un algoritmo recursivo que permita calcular convertir un númerodecimal en su valor hexadecimal (base 16).*/
