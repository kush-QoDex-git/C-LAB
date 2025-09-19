#include <stdio.h>
int magic_matrix(int dimension, int matrix[dimension][dimension])
{
    int sum = 0;
    for (int i = 0; i < dimension; i++)
    {
        sum += matrix[0][i];
    }

    // ROW CHECK
    for (int i = 1; i < dimension; i++)
    {
        int sum2 = 0;
        for (int j = 0; j < dimension; j++)
        {
            sum2 += matrix[i][j];
        }
        if (sum2 != sum)
        {
            return 0;
        }
        else
        {
        }
    }

    // COLUMN CHECK
    for (int i = 0; i < dimension; i++)
    {
        int sum2 = 0;
        for (int j = 0; j < dimension; j++)
        {
            sum2 += matrix[j][i];
        }
        if (sum2 != sum)
        {
            return 0;
        }
        else
        {
        }
    }

    // DIMENSION CHECK
    int sum_d1 = 0;
    int sum_d2 = 0;
    for (int i = 0; i < dimension; i++)
    {
        sum_d1 += matrix[i][i];
    }
    if (sum_d1 != sum)
    {
        return 0;
    }
    else
    {
    }
    for (int i = 0; i < dimension; i++)
    {
        sum_d2 += matrix[i][dimension - (i + 1)];
    }
    if (sum_d2 != sum)
    {
        return 0;
    }
    else
    {
    }
    return 1;
}
int main()
{
    int n,ans=1;
    printf("Enter the dimension for the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element for location [%d,%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
 
    if (magic_matrix(n, matrix))
    {
        printf("It is a Magic Matrix.");
    }
    else
    {
        printf("It is NOT a Magic Matrix.");
    }

    return 0;
}