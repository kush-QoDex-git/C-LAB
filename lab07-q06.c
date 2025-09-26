/* Q6.Define a recursive function int fib(int n) that returns the nth Fibonacci number.
Use it to print the first k terms of the series */
#include <stdio.h>
int fib(int n)
{
    int a = 0, b = 1, c = 0;
    for (int i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
int main()
{
    int k;
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}
