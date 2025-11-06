#include <stdio.h>
typedef enum
{
    SEDAN,
    SUV,
    HATCHBACK
} CarType;
typedef struct
{
    char name[20];
    char model[20];
    CarType type;
} CAR;
void display_car(CAR *car, int n)
{
    for (int i = 0; i < 64; i++)
    {
        printf("_");
    }
    printf("\n");
    printf("|\tNAME\t\t|\tmodel\t\t|\tTYPE\t|\n");
    printf("|");
    for (int i = 0; i < 63; i++)
    {
        printf("_");
    }
    printf("|\n");
    for (int i = 0; i < n; i++)
    {
        printf("|\t%s\t\t|\t%s\t\t", car->name, car->model);
        switch (car->type)
        {
        case SEDAN:
            printf("|\tSedan\t|\n");
            break;
        case SUV:
            printf("|\tSUV\t|\n");
            break;
        case HATCHBACK:
            printf("|\tHatchback\t|\n");
            break;
        default:
            printf("|\t--\t|\n");
            break;
        }
        car++;
    }
    printf("|");
    for (int i = 0; i < 63; i++)
    {
        printf("_");
    }
    printf("|\n");
}
int main()
{
    CAR c_l[2] = {{"amaze", "x67v", SEDAN}, {"Scorpio", "L76i", SUV}};
    display_car(c_l, 2);
    return 0;
}