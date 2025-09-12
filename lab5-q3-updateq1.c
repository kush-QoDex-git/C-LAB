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
    int n, pos_num = 0, neg_num = 0;
    printf("Enter number of element for the array: ");
    scanf("%d", &n);
    float arr1[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%f", &arr1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] < 0)
        {
            neg_num++;
        }
        else
        {
            pos_num++;
        }
    }
    float pos_arr[pos_num];
    float neg_arr[neg_num];
    int ni = 0, pi = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] < 0)
        {
            neg_arr[ni] = arr1[i];
            ni++;
        }
        else
        {
            pos_arr[pi] = arr1[i];
            pi++;
        }
    }
    printf("\n\tPositive's Arra:-\n");
    print_arr(pos_arr, pos_num);
    printf("\n\tNegative's Arra:-\n");
    print_arr(neg_arr, neg_num);

    return 0;
}