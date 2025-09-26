#include <stdio.h>
void print_arr(int *arr, int size)
{
    printf("\n{");
    for (int i = 0; i < size; i++)
    {
        if (i == (size - 1))
        {
            /* code */
            printf("%d", arr[i]);
        }
        else
        {
            printf("%d, ", arr[i]);
        }
    }
    printf("}\n");
}
void rm_duplicate(int *arr, int *len)
{
    for (int i = 0; i < *len; i++)
    {
        {
  
            for (int j = i + 1; j < *len; j++)
            {

                if (arr[i] == arr[j])
                {
                    --(*len);
                    for (int k = j; k < *len; k++)
                    {
                        arr[k] = arr[k + 1];
                    }
                    --j;
                }
        
                
                arr[*len] = (int)NULL;
            }
        }
    }
};

int main()
{
    char s[] = "fdddfd";
    int arr1[] = {1,1,1,1, 23, 34, 5, 6, 7, 12, 23, 34, 9, 0,9,9,9, 9};
    int length = (sizeof(arr1) / sizeof(arr1[0]));
    int new_length;
    print_arr(arr1, length);
    // printf(arr1);
    printf("\n");
    rm_duplicate(arr1, &length);
    print_arr(arr1, 12);

    return 0;
}
