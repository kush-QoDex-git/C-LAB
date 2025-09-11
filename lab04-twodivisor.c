#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    printf("Enter a positive Integer: ");
    scanf("%d", &n);
    do
    {
        n /= 2;
        count++;
    } while (n > 0);

    printf("%d",count);

    return 0;
}