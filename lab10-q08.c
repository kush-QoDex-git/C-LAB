#include <stdio.h>
typedef struct
{
    float real;
    float imaginary;
} COMPLEX;
void displ_cmplx(COMPLEX c)
{
    printf("%.2f + i %.2f", c.real, c.imaginary);
}
COMPLEX add_cmplx(COMPLEX c1, COMPLEX c2)
{
    COMPLEX cr;
    cr.real = c1.real + c2.real;
    cr.imaginary = c1.imaginary + c2.imaginary;
    displ_cmplx(cr);
    return c1;
}
COMPLEX multiply_cmplx(COMPLEX c1, COMPLEX c2)
{
    COMPLEX cr;
    cr.real = (c1.real * c2.real) - (c1.imaginary * c2.imaginary);
    cr.imaginary = (c1.imaginary * c2.real) + (c1.real * c2.imaginary);
    displ_cmplx(cr);
    return c1;
}

int main()
{
    COMPLEX c1 = {13, 45}, c2 = {1.4, 56};
    add_cmplx(c1, c2);
    printf("\n");
    multiply_cmplx(c1, c2);

    return 0;
}