/*Autoevaluación: Divide y Vencerás – Algoritmos Voraces  */
/*1.*/
/*Dado el siguiente programa. Indique la técnica de diseño que se aplicó.*/
/*
int main() 
{ 
  int a, n; 
  scanf("%d", &a); 
  scanf("%d", &n); 
  printf("\n%d", m(a,n)); 
} 
int m(int a, int n) 
{ 
  int temp, resp; 
  if (n==1) 
    return a; 
  else 
  { 
    if (n % 2 ==0) 
    { 
      temp=m(a, n/2); 
      resp = temp*temp; 
      return resp; 
    } 
    else 
      return (a*m(a,n-1)); 
  } 
} 
*/

/*Implementación Ejemplo*/
#include <stdio.h>
#include <stdlib.h>

int m(int a, int n)
{
  int temp, resp;
  if (n == 1)
    return a;
  else 
  {
    if (n % 2 == 0)
    {
      temp = m(a, n/2);
      resp = temp * temp;
      return resp;
    }
    else
      return (a * m(a, n-1));
  }
}

int main()
{
  int a, n;
  scanf("%d", &a);
  scanf("%d", &n);
  printf("\n%d", m(a,n));
}


/*Respuesta*/