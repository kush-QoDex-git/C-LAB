/* Q1. Basic Function Calls Write a program that defines three functions:
 • void greet()– prints a welcome message.
 • int add(int a,int b)– returns the sum of two integers.
 • float circleArea(float r)– returns the area of a circle.
 Call these functions from main() with user input.
 */
#include <stdio.h>
double pi = 3.1415926535897932384626433832795L;
void greet()
{
    printf("\n\tWelcome to Programming Abyss!\n");
}
int add(int a, int b)
{
    return a + b;
}
float circleArea(float r)
{
    return pi * r * r;
}
int main()
{
    greet();
    int a, b;
    printf("Enter two number to add: ");
    scanf("%d %d", &a, &b);
    printf("\n");
    printf("Sum: %d", add(a,b));
    float r;
    printf("\nEnter radius of the circle to get its Area: ");
    scanf("%f", &r);
    printf("Area: %f", circleArea(r));

    return 0;
}