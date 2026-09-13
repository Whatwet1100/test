#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double m, t, s, l;
    cin >> m >> t >> s;
    l = s - m * t;

    if (t == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    if (l >= 0)
    {
        cout << 0 << endl;
    }
    else
    {
        double v = m - s / t;
        v = floor(v);
        cout << v << endl;
    }



    return 0;
}