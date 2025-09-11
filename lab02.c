#include <stdio.h>
#include <math.h>
#include <string.h>

void main()
{
    //--------------------1----------------------
    printf("\n--------------------1----------------------");
    float len;
    float wid;
    printf("enter the length: ");
    scanf("%f", &len);
    printf("enter the width: ");
    scanf("%f", &wid);

    float result = (len / 3);
    printf("\nresult of length/3 is: %f", result);
    // printf("and datatype of result is: ", result);
    result = (wid / 2);
    printf("\nresult of width/2 is: %f", result);
    result = (len / 3.0);
    printf("\nresult of length/3.0 is: %f", result);
    result = (len / wid);
    printf("\nresult of length/width is: %f", result);
    // float result = (len + wid) / ;
    // printf("result of length/3 is: %f", result);

    //--------------------2----------------------

    printf("\n--------------------2----------------------");
    printf("\nvalue of 1/2π is : %.6f \n", 1 / (2 * 3.1415926));

    //--------------------3----------------------
    printf("\n--------------------3----------------------");

    // equatino : 2x^2 - 4x - 3 = 0
    int a = 2;
    int b = -4;
    int c = -3;
    float x;
    float y;
    float d = ((b * b) - (4 * a * c));
    if (d >= 0)
    {
        x = (-b + (pow(d, 0.5))) / (2 * a);
        y = (-b - (pow(((b * b) - (4 * a * c)), 0.5))) / (2 * a);
        printf("\nsolutions  for 2x^2 - 4x -3 =0");
        printf("\nx = %f & %f\n", x, y);
    }
    else if (((b * b) - (4 * a * c)) < 0)
    {
        printf("solutions are imaginary");
    }

    //--------------------4----------------------
    printf("\n--------------------4----------------------");
    float distance = 10;
    float time = 43.5;
    printf("\naverage time per km = %f\n", time / distance);
    printf("\nspeed in km/h  = %f\n", distance / (time / 60));

    //--------------------5----------------------
    printf("\n--------------------5----------------------");
    float arr[5];
    float sum = 0;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        printf("enter decimal no. %d: ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    printf("\navg of given numbers is: %f\n", sum / 5);
    //--------------------6----------------------
    printf("\n--------------------6----------------------");
    char str1[] = "hello";
    char str2[] = " world";
    strcat(str1, str2);
    printf("%s", str1);
}