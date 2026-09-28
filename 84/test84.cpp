#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> res;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        res.push_back(temp);
    }

    sort(res.begin(), res.end());
    cout << res[n-1] - res[0] << endl;

    return 0;
}