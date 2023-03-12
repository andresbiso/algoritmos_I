/*Autoevaluación: Eficiencia de los algoritmos */
/*1.*/
int sumar(int vec[], int dim)
{
    if (dim == 0)
        return 0;
    else
        return sumar(vec, dim - 1) + vec[dim];
}

/*2.*/
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

/*3.*/
void fun(int val)
{

    if (val > 1)
        fun(val / 2);
    printf("%d", val % 2);
}

/*4.*/
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