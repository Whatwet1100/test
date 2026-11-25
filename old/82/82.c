#include<stdio.h>

int tri(int a)
{
    int res;
    res = a * a * a;
    return res;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a < 100 || b > 999 || b < a)
    {
        printf("Invalid Value.");
        return 0;
    }

    for(int i = a; i <= b; i++)
    {
        int cnt[3] = {0};
        cnt[0] = i % 10;
        cnt[1] = i % 100 / 10;
        cnt[2] = i / 100;

        if(tri(cnt[0]) + tri(cnt[1]) + tri(cnt[2]) == i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}