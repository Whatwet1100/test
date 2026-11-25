#include <stdio.h>
#include<math.h>
int main(void)
{
    double x;
    double res;
    scanf("%lf", &x);

    if(x < 0 && fabs(x + 3) > 1e-8)
    {
        res = (x * x + x - 6) * 1.0;

    }
    else if (x >= 0 && x < 10 && fabs(x - 2) > 1e-8 && fabs(x - 3) > 1e-8)
    {
        res = (x * x - 5 * x + 6) * 1.0;
    }
    else
    {
        res = (x * x - x - 1) * 1.0;
    }
    printf("%.3lf", res);

    return 0;
}
