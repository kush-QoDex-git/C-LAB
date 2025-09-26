/*Q3. Create a function long factorial(int n) to
compute n!. Use it to calculate binomial coefficient:
             C(n,r) = n!/(r!(n − r)!)
 Take n and r from the user.
 */
#include <stdio.h>
long long facto(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * facto(n - 1);
}

int main()
{
    int r, n;
    printf("To get the Binomial Coefficient of rth term enter the degree and r: ");
    scanf("%d %d", &n, &r);
    double c = facto(n) / (facto(r - 1) * (facto(n - (r - 1))));
    printf("Binomial Coefficient for %dth term: %lf", r, c);

    return 0;
}