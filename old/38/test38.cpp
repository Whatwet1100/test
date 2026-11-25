#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a;
    cout << fixed << setprecision(3);
    cin >> a;

    if(0 <= a && a < 5)
    {
        cout << -a + 2.5 << endl;
    }
    else if(5 <= a && a < 10)
    {
        cout << 2 - 1.5 * (a - 3) * (a - 3) << endl;
    }
    else if(10 <= a && a < 20)
    {
        cout << a / 2 - 1.5 << endl;
    }

    return 0;
}