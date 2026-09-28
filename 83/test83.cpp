#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b;
    cin >> a;

    b = (pow((1 + sqrt(5)) / 2, a) - pow((1 - sqrt(5)) / 2, a)) / sqrt(5);
    cout << fixed << setprecision(2);
    cout << b << endl;

    return 0;
}