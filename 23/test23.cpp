#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a;
    double pi = 3.14159;
    cin >> a;
    cout << fixed << setprecision(4);
    cout << a * 2 << " " << 2 * pi * a << " " << pi * a * a << endl;

    return 0;
}