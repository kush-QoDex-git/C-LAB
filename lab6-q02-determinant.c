#include <stdio.h>
int main()
{
    int n;
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
    float deter = 0;
    if (n == 3)
    {
        deter = matrix[0][0] * (matrix[1][1] * matrix[2][2] - (matrix[2][1] * matrix[1][2])) - (matrix[0][1]) * (matrix[1][0] * matrix[2][2] - (matrix[2][0] * matrix[1][2])) + (matrix[0][2]) * (matrix[0][1] * matrix[1][2] - (matrix[2][0] * matrix[1][1]));
        printf("Determinant: %f", deter);
    }
    else{
        printf("Right now I don't know beyound 3x3. SORRY");
    }
    return 0;
}