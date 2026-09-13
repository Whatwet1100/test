#include <iostream>
using namespace std;

int main()
{
    string s;
    int b = 0, d = 0;
    long long c;

    cin >> c;
    cin >> s;

    for (int i = 0; i < 2; i++)
    {
        if (s[i] == 'B')
            b++;
        else if (s[i] == 'C')
            d++;
    }

    if (b > 0 && d > 0)
    {
        cout << c * 6 / 10;
    }
    else if (b > 0)
    {
        cout << c * 8 / 10;
    }
    else if (d > 0)
    {
        cout << c * 7 / 10;
    }
    else
    {
        cout << c;
    }

    return 0;
}