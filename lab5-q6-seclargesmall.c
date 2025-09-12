#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of element for the array: ");
    scanf("%d", &n);
    float arr1[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%f", &arr1[i]);
    }
    float sec_large = 0, sec_small = 0, large = 0, small = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            large = arr1[i];
            small = arr1[i];
            sec_large = small;
            sec_small = large;
        }
        else
        {

            // large = (arr1[i] > large) ? arr1[i] : large;
            if (large < arr1[i])
            {
                sec_large = large;
                large = arr1[i];
            }
            else
            {
            }
            // small = (arr1[i] < small) ? arr1[i] : small;
            if (small > arr1[i])
            {
                sec_small = small;
                small = arr1[i];
            }
            else
            {
            }
        }
    }
    printf("\n\tSecond Largest: %.2f", sec_large);
    printf("\n\tSecond Smallest: %.2f", sec_small);

    return 0;
}