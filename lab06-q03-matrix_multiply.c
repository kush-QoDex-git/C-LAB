#include <stdio.h>
void print_matrix(int r,int c, float matrix[r][c]){
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        printf("\t\t");
        for (int j = 0; j < c; j++)
        {
            printf("%f ",matrix[i][j]);
        }
        printf("\n");
    }
    
}
int main()
{
    int n, m;
    printf("Enter the dimensions for first matrix: ");
    scanf("%d %d", &n, &m);
    int a, b;
    printf("Enter the dimensions for second matrix: ");
    scanf("%d %d", &a, &b);
    if (m != a)
    {
        printf("Matrix multiplication is not possible for given dimensions.");
        return 0;
    }
    else
    {
    }
    float m1[n][m];
    printf("\tFor First Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter element for location [%d,%d]: ", i + 1, j + 1);
            scanf("%f", &m1[i][j]);
        }
    }
    float m2[a][b];
    printf("\tFor Second Matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter element for location [%d,%d]: ", i + 1, j + 1);
            scanf("%f", &m2[i][j]);
        }
    }

    float m3[n][b];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < b; j++)
        {
            float term = 0;
            for (int k = 0; k < m; k++)
            {
                term += m1[i][k] * m2[k][j];
            }
            m3[i][j] = term;
        }
    }
    printf("%f", m3[1][1]);
    print_matrix(n,b,m3);

    return 0;
}
