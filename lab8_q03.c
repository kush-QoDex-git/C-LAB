#include <stdio.h>

typedef struct
{
    float real;
    float imaginary;
} COMPLX;

COMPLX add_complx(COMPLX c1, COMPLX c2)
{
    COMPLX r;
    r.real = c1.real + c2.real;
    r.imaginary = c1.imaginary + c2.imaginary;
    return r;
}

COMPLX Multiply_complx(COMPLX c1, COMPLX c2){
    COMPLX r;
    r.real = (c1.real*c2.real)-(c1.imaginary*c2.imaginary);
    r.imaginary = (c1.real*c2.imaginary)+(c1.imaginary*c2.real);
    return r;
}
void display_cmplx(COMPLX c)
{
    printf("\n%.2f + %.2fi\n", c.real, c.imaginary);
}
int main()
{
    COMPLX c1 = {12.3, 45};
    COMPLX c2 = {132.3, 4.7};
    COMPLX c3 = add_complx(c1, c2);
    COMPLX c4 = Multiply_complx(c1, c2);
    display_cmplx(c3);
    display_cmplx(c4);

    return 0;
}