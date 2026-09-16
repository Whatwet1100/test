#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, t;
    vector<int> a;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
    }

    cout << *min_element(a.begin(), a.end());

    return 0;
}