#include <iostream>
#include <vector>
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

    int b = a[0] / a[1];
    int c = a[0] - a[1] * b;
    cout << b << " " << c << endl;

    return 0;
}