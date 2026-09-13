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

    double b = static_cast<double>(a[0]) / static_cast<double>(a[1]);
    cout << fixed << setprecision(9);
    cout << b << endl;
    return 0;
}