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

/*2.Diseñar un algoritmo recursivo que encuentre la suma de los enteros positivos pares desde N hasta 2.
Si N es impar imprimir un mensaje de error.
*/

#include <stdio.h>

int obtenerSumaEnterosParesRecursivo(int n)
{
    if (n < 2)
    {
        return 0;
    }

    return n + obtenerSumaEnterosParesRecursivo(n - 2);
}

int main()
{
    int num, result;
    printf("Ingrese un entero par positivo:\n");
    scanf("%d", &num);
    if (num < 0 || num % 2 != 0)
    {
        printf("Error: Ha ingresado un valor inválido");
        return 0;
    }
    result = obtenerSumaEnterosParesRecursivo(num);
    printf("Forma recursiva: %d\n", result);
    return 0;
}

/*3.Diseñar un algoritmo recursivo e iterativo que permita hacer la división por restas sucesivas.*/

#include <stdio.h>

int obtenerDivisionIterativo(int dividendo, int divisor)
{
    int i = 0;
    while (dividendo >= divisor)
    {
        dividendo = dividendo - divisor;
        i++;
    }
    return i;
}

int obtenerDivisionRecursivo(int dividendo, int divisor, int cociente)
{
    if (dividendo >= divisor)
    {
        cociente++;
        obtenerDivisionRecursivo(dividendo - divisor, divisor, cociente);
    }
    else
    {
        return cociente;
    }
}

int main()
{
    int dividendo, divisor, cociente, result;
    cociente = 0;
    printf("Ingrese dividendo:\n");
    scanf("%d", &dividendo);
    printf("Ingrese divisor:\n");
    scanf("%d", &divisor);
    result = obtenerDivisionIterativo(dividendo, divisor);
    printf("Forma iterativa: %d\n", result);
    result = obtenerDivisionRecursivo(dividendo, divisor, cociente);
    printf("Forma recursiva: %d\n", result);
    return 0;
}

/*4.Diseñar un algoritmo recursivo que permita invertir un número.*/
/*Ejemplo: Entrada: 123 Salida: 321*/

#include <stdio.h>

int invertirNumero(int num, int inverso)
{
    int resto = 0;
    if (num != 0)
    {
        resto = num % 10;
        inverso = inverso * 10 + resto;
        num = num / 10;
        invertirNumero(num, inverso);
    }
    else
    {
        return inverso;
    }
}

int main()
{
    int num, inverso, result;
    inverso = 0;
    printf("Ingrese un número:\n");
    scanf("%d", &num);

    result = invertirNumero(num, inverso);
    printf("Forma recursiva: %d\n", result);
    return 0;
}

/*5.Diseñar un algoritmo recursivo que permita sumar los dígitos de un número.*/
/*Ejemplo: Entrada: 123 Resultado:6*/

#include <stdio.h>

int sumarDigitos(int num, int suma)
{
    int resto = 0;
    if (num != 0)
    {
        resto = num % 10;
        suma = suma + resto;
        num = num / 10;
        sumarDigitos(num, suma);
    }
    else
    {
        return suma;
    }
}

int main()
{
    int num, suma, result;
    suma = 0;
    printf("Ingrese un número:\n");
    scanf("%d", &num);

    result = sumarDigitos(num, suma);
    printf("Forma recursiva: %d\n", result);
    return 0;
}

/*6.Diseñar un algoritmo recursivo que permita multiplicar los elementos de un vector.*/

#include <stdio.h>

int multiplicarDigitos(int array[], int len, int multi)
{
    if (len > 0)
    {
        multi = multi + array[len - 1];
        multiplicarDigitos(array, len - 1, multi);
    }
    else
    {
        return multi;
    }
}

int main()
{
    int len, multi, result;
    multi = 0;
    printf("Ingrese largo del array:\n");
    if (scanf("%d", &len) != 1 || len <= 0 || len > 1000)
    {
        fprintf(stderr, "Input Inválido\n");
        return 1;
    }
    int array[len];
    for (int i = 0; i < len; i++)
    {
        printf("Ingrese valor %d del array:\n", i + 1);
        if (scanf("%d", &array[i]) != 1)
        {
            fprintf(stderr, "Input Inválido\n");
            return 1;
        }
    }

    result = multiplicarDigitos(array, len, multi);
    printf("Forma recursiva: %d\n", result);
    return 0;
}

/*7.Diseñar un algoritmo recursivo que muestre el número menor de un vector*/
#include <stdio.h>

int numeroMenor(int array[], int len, int min)
{
    if (len > 0)
    {
        int val = array[len - 1];
        if (val < min)
        {
            min = val;
        }
        numeroMenor(array, len - 1, min);
    }
    else
    {
        return min;
    }
}

int main()
{
    int len, min, result;
    min = 0;
    printf("Ingrese largo del array:\n");
    if (scanf("%d", &len) != 1 || len <= 0 || len > 1000)
    {
        fprintf(stderr, "Input Inválido\n");
        return 1;
    }
    int array[len];
    for (int i = 0; i < len; i++)
    {
        printf("Ingrese valor %d del array:\n", i + 1);
        if (scanf("%d", &array[i]) != 1)
        {
            fprintf(stderr, "Input Inválido\n");
            return 1;
        }
    }

    result = numeroMenor(array, len, min);
    printf("Forma recursiva: %d\n", result);
    return 0;
}

/*8.Diseñar un algoritmo recursivo que calcule el coeficiente binomial.*/
/*Definición recursiva: https://math.stackexchange.com/questions/3656704/recursive-definition-of-the-binomial-coefficient*/
#include <stdio.h>

int obtenerCoeficienteBinomial(int n, int k))
{
    if (n == 0 || k == 0 || k == n)
        return 1;
    if (k < 0 || k > n)
        return 0;
    return obtenerCoeficienteBinomial(n - 1, k - 1) + obtenerCoeficienteBinomial(n - 1, k);
}

int main()
{
    int n, k, result;

    printf("Ingrese valor n:\n");
    if (scanf("%d", &n) != 1 || n < 0)
    {
        fprintf(stderr, "Input Inválido\n");
        return 1;
    }

    printf("Ingrese valor k:\n");
    if (scanf("%d", &array[i]) != 1 || k < 0 || k > n)
    {
        fprintf(stderr, "Input Inválido\n");
        return 1;
    }

    result = obtenerCoeficienteBinomial(n, k);
    printf("Forma recursiva: %d\n", result);
    return 0;
}

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

/*a.Dado un numero cualquiera x, ¿cuál es la salida de f(x,2)?*/
/*b.Implementar un algoritmo iterativo equivalente.*/
#include <stdio.h>

void f(int num, int div)
{
    if (num > 1)
    {
        if ((num % div) == 0)
        {
            printf("%d\n", div);
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
    int dividendo, divisor;

    printf("Ingrese dividendo n:\n");
    if (scanf("%d", &dividendo) != 1)
    {
        fprintf(stderr, "Input Inválido\n");
        return 1;
    }

    printf("Ingrese divisor k:\n");
    if (scanf("%d", &divisor) != 1)
    {
        fprintf(stderr, "Input Inválido\n");
        return 1;
    }

    f(dividendo, divisor);
    return 0;
}

/*a. La salida de f(x,2) va a mostrar el cociente de la división.
En el caso de usar f(10,2) obtendremos:
2 por stdout la primera vez que se cumple la condición (num % div) == 0 y 5 por stdout la segunda vez que se cumpla la misma
para dar fin a la división*/

/*b.*/

#include <stdio.h>

void divisionIterativa(int dividendo, int divisor)
{
    int resto = dividendo;
    int cociente = 0;
    while (resto >= divisor)
    {
        resto = resto - divisor;
        cociente = cociente + 1;
    }
    printf("cociente: %d\n", cociente);
}

int main()
{
    int dividendo, divisor;

    printf("Ingrese dividendo:\n");
    if (scanf("%d", &dividendo) != 1)
    {
        fprintf(stderr, "Input Inválido\n");
        return 1;
    }

    printf("Ingrese divisor:\n");
    if (scanf("%d", &divisor) != 1)
    {
        fprintf(stderr, "Input Inválido\n");
        return 1;
    }

    divisionIterativa(dividendo, divisor);
    return 0;
}

/*10.Diseñar un algoritmo recursivo que permita calcular convertir un número decimal en su valor hexadecimal (base 16).*/
/*Se debe dividir sucesivamente por 16 y luego obtener el último cociente y los restos en orden inverso.
Cada valor debe ser pasado a su equivalente en Hexa. Ejemplo: 10 = A*/

#include <stdio.h>

void convertirDecHex(int dec, char hexa[], int len)
{
    if (dec != 0)
    {
        int temp = dec % 16;
        // Convierto resto en decimal a valor en ASCII
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        hexa[len++] = temp;
        dec = dec / 16;
        convertirDecHex(dec, hexa, len);
    }
    else
    {
        printf("Valor en Hexadecimal:\n");
        // Recupero valores en sentido inverso
        for (int j = len - 1; j >= 0; j--)
            printf("%c", hexa[j]);
    }
}

int main()
{
    int num;
    char hexa[100];

    printf("Ingrese número a convertir a hexa:\n");
    if (scanf("%d", &num) != 1)
    {
        fprintf(stderr, "Input Inválido\n");
        return 1;
    }

    convertirDecHex(num, hexa, 0);
    return 0;
}
