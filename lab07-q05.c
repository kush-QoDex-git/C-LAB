/*Q5. Write functions to
 • Find the maximum and minimum in an integer array.
 • Compute the average of array elements.
 • Search for an element using linear search.
 Demonstrate their use in a single program.
 */
#include <stdio.h>
void max_min_in_arry(int *arr, int size, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        else if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}
double avg_array_elements(int *arr, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum / size;
    ;
}
int linear_search(int *arr, int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
void fill_array(int *arr, int size)
{
    printf("\tInput elements for the array.\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int size, max, min;
    printf("Enter a size for the integer array: ");
    scanf("%d", &size);
    int arr[size];
    fill_array(arr, size);
    max_min_in_arry(arr, size, &max, &min);
    printf("Maximum in the array: %d\n", max);
    printf("Minimum in the array: %d\n", min);
    printf("Average of the array elements: %lf\n", avg_array_elements(arr, size));

    int key;
    printf("Enter the Element you want to search: ");
    scanf("%d", &key);
    if (linear_search(arr, size, key) > -1)
    {
        printf("\n It is at index: %d\n", linear_search(arr, size, key));
    }
    else
    {
        printf("\nElement NOT found");
    }
    return 0;
}