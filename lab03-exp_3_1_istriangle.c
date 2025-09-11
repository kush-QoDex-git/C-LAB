#include <stdio.h>
#include <math.h>
// void setSides(float* a, float* b, float* c)
float triAreaSides(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    float ins = s * (s - a) * (s - b) * (s - c);
    float area = pow(ins, 0.5);
    return area;
}
void chkTri()
{
    float s1;
    float s2;
    float s3;
    printf("Enter the length of first side: ");
    scanf("%f", &s1);
    printf("Enter the length of second side: ");
    scanf("%f", &s2);
    printf("Enter the length of third side: ");
    scanf("%f", &s3);

    if ((s1 < 0) || (s2 < 0) || (s3 < 0))
    {
        printf("Given side is invalid(negetive) please try again\n");
    }
    else if (((s1 + s2) < s3) || ((s1 + s3) < s2) || ((s2 + s3) < s1))
    {
        printf("A triangle with given sides is not possible please try again\n");
        chkTri();
    }
    else
    {
        printf("area of the triangle is: %f", triAreaSides(s1, s2, s3));
    }
}

int main()
{
    // check if a triangle is posible or not for a given set of three length for side
    chkTri();

    return 0;
}