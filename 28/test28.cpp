#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    vector<double> a;
    int n = 2;     
    double t;
    for(int i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
    }

    double r = (long long)trunc(a[0] / a[1]);
    cout << fixed << setprecision(4);
    cout << a[0] - r * a[1] << endl;


    return 0;
}