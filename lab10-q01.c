#include <stdio.h>
#include <string.h>

typedef union
{
    int i;
    float f;
    char c[20];
} data;

int main()
{
    data d1;
    d1.i = 23;
    printf("size of d1:%zu d1.i:%d\n",sizeof(data), d1.i);
    
    d1.f = 23;
    printf("size of d1:%zu d1.f:%f\n",sizeof(d1), d1.f);
    strcpy(d1.c,"sdsds");
    printf("size of d1:%zu d1.c:%s\n",sizeof(d1), d1.c);
    // because all members of an union share same memory location
    return 0;
}