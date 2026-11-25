#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a;
    for(int i = 0; i < n; i ++) 
    {
        a.push_back((i == 0 ? 0 : a[i - 1]) + (int)(100 * sin(n + i)) % 3);
    }

    for(auto num : a) cout << num << " ";

    return 0;
}