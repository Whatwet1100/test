#include <iostream>
#include <vector>
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

    int b = a[0] / a[1] + 10;
    cout << b << endl;
    return 0;
}