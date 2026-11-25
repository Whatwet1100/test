#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a;
    double pi = 3.14;
    cin >> a;
    cout << fixed << setprecision(5);
    cout << 4 * pi * a * a * a / 3 << endl;

    return 0;
}