#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    int n = 3;     
    int t;
    for(int i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
    }

    int b = 0.2 * a[0] + 0.3 * a[1] + 0.5 * a[2];
    cout << b << endl;

    
    return 0;
}