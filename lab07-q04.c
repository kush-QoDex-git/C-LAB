/*Q4. String Operations using Functions Without using <string.h>, write functions to:
 • Find the length of a string.
 • Reverse a string.
 • Compare two strings for equality.
 Call these functions from main().
 */
#include <stdio.h>
int str_len(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
void reverse_str(char *str)
{
    int len = str_len(str);
    char temp;
    for (int i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - (i + 1)];
        str[len - (i + 1)] = temp;
    }
}
int str_cmp(char *str1, char *str2)
{
    int ans = 0, len1 = str_len(str1), len2 = str_len(str1);
    int sml = (len1 < len2) ? len1 : len2;
    for (int i = 0; i < sml; i++)
    {
        if ((int)str1[i] < (int)str2[i])
        {
            ans = -1;
            break;
        }
        else if ((int)str1[i] > (int)str2[i])
        {
            ans = 1;
            break;
        }
        else
        {
        }
    }
    if (ans == 0)
    {
        if (len1 > len2)
        {
            ans = 1;
        }
        else if (len2 > len1)
        {
            ans = -1;
        }
        else
        {
            ans = 0;
        }
    }
    else
    {
    }
    return ans;
}
int main()
{
    char str1[] = "CODING";
    char str2[] = "cODING";
    char str3[] = "dfghj";
    char str4[] = "dfghje";
    printf("Length of str1: %d\n", str_len(str1));
    printf("str1 compared to srt2: %d\n", str_cmp(str1, str2));
    printf("str2 compared to srt1: %d\n", str_cmp(str2, str1));
    printf("str3 compared to str4: %d\n", str_cmp(str3, str4));
    reverse_str(str4);
    printf("%s", str4);

    return 0;
}