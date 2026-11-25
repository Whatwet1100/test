#include <iostream>
using namespace std;

int main()
{
    double s, x = 2, ti = 0;
    cin >> s;
    while(s > 0)
    {
        s = s - x;
        x = 0.98 * x;
        ti ++;
    }

    cout << ti << endl;

    return 0;
}