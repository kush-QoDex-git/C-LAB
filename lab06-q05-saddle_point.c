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

    int min_i, min_j;
    float min = 0, m = 0;
    for (int i = 0; i < n; i++)
    {
        ans = 1;
        min = matrix[i][0];
        min_j = 0;
        min_i = i;
        printf("%f", min);
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
                min_j = j;
                min_i = i;
            }
            else
            {
            }
        }
        for (int k = 0; k < n; k++)
        {
            if (min < matrix[k][min_j])
            {
                ans = 0;
            }
            else
            {
            }
        }
        if (ans==1)
        {
            break;
        }
        
    }
    if (ans)
    {
        printf("Saddle Point: matrix[%d,%d] = %f", min_i, min_j, matrix[min_i][min_j]);
    }

    return 0;
}
