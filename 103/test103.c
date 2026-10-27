#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a + b > c && a + c > b && b + c > a)
    {
        if(fabs(a * a + b * b - c * c) < 0.001 || fabs(a * a + c * c - b * b) < 0.001 || fabs(b * b + c * c - a * a) < 0.001)
        {
            if(a == b || a == c || b == c)
            {
                printf("等腰直角三角形");
            }
            else
            {
                printf("直角三角形");
            }
        }
        else if(a == b || b == c || a == c)
        {
            if (a == b && b == c)
            {
                printf("等边三角形");
            }
            else
            {
                printf("等腰三角形");
            }
        }
        else
        {
            printf("普通三角形");
        }
    }
    else
    {
        printf("非三角形");
    }
}