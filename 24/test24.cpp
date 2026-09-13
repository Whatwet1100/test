#include <iostream>
#include <vector>
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

    cout << fixed << setprecision(2);
    cout << a[0] * a[1] / (a[0] + a[1]) << endl;

    return 0;
}