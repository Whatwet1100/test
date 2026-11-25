#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a;
    cin >> a;
    double b = (a - 32) * 5 / 9;
    cout << fixed << setprecision(5);
    cout << b << endl;
    return 0;
}