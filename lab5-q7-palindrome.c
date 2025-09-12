#include <stdio.h>
#include <math.h>

int main()
{
    int arr[] = {1, 2, 4, 3, 2, 1};
    int ans, front, back;
    int size = sizeof(arr) / sizeof(int);
    unsigned long long d1 = (unsigned long long)pow(10, size - 1);
    int d2 = 10;
    for (int i = 0; i <= (size / 2); i++)
    {
        front = arr[i];
        back = arr[size - (i + 1)];
        if (front != back)
        {
            ans = 0;
            break;
        }
        else
        {
            ans = 1;
        }
    }
    if (ans)
    {
        printf("Array is a Palindrome.");
    }
    else
    {

        printf("Array is NOT a Palindrome.");
    }

    return 0;
}