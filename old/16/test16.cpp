#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    vector<int> a;
    int n = 2;     
    int t;
    for(int i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
    }

    double b = a[1] * a[1] * 3.14 * a[0] / 1000;

    int c = 20 / b + 1;
    cout << fixed << setprecision(0);
    cout << c << endl; 

    return 0;
}