#include <stdio.h>
void print_arr(float *arr, int size)
{
    printf("\n{");
    for (int i = 0; i < size; i++)
    {
        printf("%.1f, ", arr[i]);
    }
    printf("}\n");
}
int main()
{
    int n;
    printf("Enter number of element for the array: ");
    scanf("%d", &n);
    float arr1[n];
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%f", &arr1[i]);
    }
    float twicearr[2 * n];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        twicearr[k] = arr1[i];
        k++;
        twicearr[k] = arr1[i];
        k++;
    }
    print_arr(twicearr, 2 * n);
    return 0;
}
