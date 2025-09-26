/*Q7. Create a function int isPalindrome(int n) that returns 1 if an integer is a palindrome, else 0. Test
 the function on multiple user–entered numbers.
 */
#include <stdio.h>
int num_0f_digit(int n)
{
    int d = 10, nof = 0;
    while (n / (d / 10) > 0)
    {
        nof++;
        d *= 10;
    }
    return nof;
}
int power(int n, int p)
{
    int pow = 1;
    if (p == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= p; i++)
        {
            pow *= n;
        }
    }
    return pow;
}
int isPalindrome(int n)
{
    int nof = num_0f_digit(n);
    int bdiv = 10, fdiv = power(10, (nof - 1));
    int bdig, fdig;
    for (int i = 0; i < nof / 2; i++)
    {
        bdig = (n % bdiv) / (bdiv / 10);
        fdig = (n / fdiv) % 10;
        if (bdig != fdig)
        {
            return 0;
        }
        else
        {
        }
        bdiv *= 10;
        fdiv = fdiv / 10;
    }
}

int main()
{

    int n;
    scanf("%d", &n);
    if (isPalindrome(n))
    {
        printf("It is a Palindrome.");
    }
    else
    {
        printf("It is NOT a Palindrome.");
    }
    return 0;
}