/*Q2. Write a function int isPrime(int n) that returns 1 if n is prime, else 0. Use this function to:
(a) Display all prime numbers between two user–given limits.
(b) Find the nth prime number.
*/
#include <stdio.h>

int isPrime(int n)
{
    if (n == 2)
    {
        return 1;
    }
    else
    {

        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
            else
            {
            }
        }
    }
    return 1;
}

int main()
{
    int l, u;
    printf("Enter starting and end point to display prime in between: ");
    scanf("%d %d", &l, &u);
    printf("\n\tPrimes in between:\n");
    for (int i = l; i <= u; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
        else
        {
        }
    }
    int n, c = 0;
    printf("\nEnter a value of n for nth prime number: ");
    scanf("%d", &n);
    int i = 2;
    while (c < n)
    {
        if (isPrime(i))
        {
            c++;
            printf("%d",c);
        }
        else
        {
        }
        i++;
    }
    i-=1;
    printf("\n\tnth Prim number: %d",i);

    return 0;
}