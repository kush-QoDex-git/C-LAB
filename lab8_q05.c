#include <stdio.h>
enum Weekday
{
    MON=1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    switch (n)
    {
    case MON:
        printf("Monday");
        break;
    case TUE:
        printf("Tuesday");
        break;
    case WED:
        printf("wednesday");
        break;
    case THU:
        printf("Thursday");
        break;
    case FRI:
        printf("Friday");
        break;
    case SAT:
        printf("Saturday. !WEEKEND:)!");
        break;
    case SUN:
        printf("Sunday. !WEEKEND:)!");
        break;
    default:
        break;
    }
    return 0;
}