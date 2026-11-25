#include<stdio.h>

int main()
{
    double a = 1.0, b = 1.0, n, res = 0;
    scanf("%lf", &n);

    for(int i = 1; i <= n; i ++)
    {
        if(i % 2 == 1) 
        {
            res = res + a/b;

        }
        else
        {
            res = res - a/b;

        }

        a = a + 1;
        b = b + 2;
    }

    printf("%.3f", res);
    return 0;

    
}