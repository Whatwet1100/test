#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
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
    vector<double> b;  
    double q;
    for(int i = 0; i < n; i++)
    {
        cin >> q;
        b.push_back(q);
    }
    cout << fixed << setprecision(3);
    cout << sqrt(pow(a[0] - b[0], 2) + pow(a[1] - b[1], 2)) << endl;

    return 0;
}