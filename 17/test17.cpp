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

    int b = (a[0] * 10 + a[1]) / 19;
    cout << b << endl;

    return 0;
}