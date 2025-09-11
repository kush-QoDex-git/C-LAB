#include <stdio.h>

int main()
{
    int n;
    int sum =0;
    printf("Enter the integer: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += (i * i);
        }
        else
        {
        }
    }
    printf("%d",sum);
    return 0;
}