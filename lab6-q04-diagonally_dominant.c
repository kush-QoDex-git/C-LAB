#include <stdio.h>

int main()
{
    int n, ans = 1;
    printf("Enter the dimension for the square matrix: ");
    scanf("%d", &n);
    float matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element for location [%d,%d]: ", i + 1, j + 1);
            scanf("%f", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        float sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            sum += matrix[i][j];
        }
        if (sum > matrix[i][i])
        {
            ans = 0;
            break;
        }
    }
    if (ans)
    {
        printf("It is diagonally dominant.");
    }
    else
    {
        printf("It is NOT diagonally dominant.");
    }
    return 0;
}