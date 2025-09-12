#include <stdio.h>

int main()
{

    float arr1[5];
    float sum = 0;
    printf("Enter 5 elements for the array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &arr1[i]);
    }
    // print array & sum
    printf("\n{");
    for (int i = 0; i < 5; i++)
    {
        if (i == 4)
        {
            printf("%.1f", arr1[i]);
            sum += arr1[i];
        }
        else
        {
            printf("%.1f, ", arr1[i]);
            sum += arr1[i];
        }
    }
    printf("}\n");

    // MAX number
    float max = 0;
    float min = 0;
    for (int i = 0; i < 5; i++)
    {
        max = (arr1[i] > max) ? arr1[i] : max;
    }
    printf("\n\tMaximum number: %.2f\n", max);
    for (int i = 0; i < 5; i++)
    {
        min = (arr1[i] < min) ? arr1[i] : min;
    }
    printf("\n\tMinimum number: %.2f\n", min);
    printf("\n\tSum of number: %.2f\n", sum);

    return 0;
}
