//  FOr summation of gp of x COmmon Ration

#include <stdio.h>
#include <math.h>
int main()
{

    int num_of_approx = 0;
    float base, error_limit, sum_approx = 0;
    printf("Enter the base:{|base|<1} for GP: ");
    scanf("%f", &base);
    printf("Enter the tolerable error limit: ");
    scanf("%f", &error_limit);
    float actual_sum = (1 / (1 - base));

    do
    {
        sum_approx += pow(base, num_of_approx);
        num_of_approx++;
    } while ((actual_sum - sum_approx) >= (error_limit * actual_sum)); // while (sum_approx <=( actual_sum - (actual_sum * error_limit)));
    printf("\n%d -->  %f", num_of_approx, sum_approx);
    
    return 0;
}