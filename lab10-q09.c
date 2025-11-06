#include <stdio.h>

int main()
{
    int a = 89;
    float b = 32.4;
    char c = 'h';
    int *a_ptr = &a;
    float *b_ptr = &b;
    char *c_ptr = &c;
    printf("int pointer: %p, value: %d\n", a_ptr, *a_ptr);
    printf("float pointer: %p, value: %f\n", b_ptr, *b_ptr);
    printf("char pointer: %p, value: %c", c_ptr, *c_ptr);

    return 0;
}