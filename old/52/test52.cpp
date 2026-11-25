#include <iostream>
using namespace std;

int main()
{
    int a, x, y;
    cin >> a;

    x = a * 5;
    y = 11 + a * 3;

    if (x < y)
    {
        printf("Local");
    }
    else
    {
        printf("Luogu");
    }

    return 0;
}