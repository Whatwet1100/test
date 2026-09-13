#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    double p;
    vector<double> a;
    int n = 6;     
    double t;
    for(int i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
    }

    double b, c, d;
    b = sqrt(pow(a[0] - a[2], 2) + pow(a[1] - a[3], 2));
    c = sqrt(pow(a[0] - a[4], 2) + pow(a[1] - a[5], 2));
    d = sqrt(pow(a[2] - a[4], 2) + pow(a[3] - a[5], 2));

    p = 1.0/2 * (b + c + d);
    cout << fixed << setprecision(2);
    cout << sqrt(p * (p - b) * (p - c) * (p - d)) << endl;

    return 0;
}