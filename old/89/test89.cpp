#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int n;

    vector<int> scr;
    cin >> n;
    double all = 0;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        scr.push_back(temp);
    }

    sort(scr.begin(), scr.end());
    scr.erase(scr.begin());
    scr.erase(scr.end() - 1);

    for(auto num : scr)
    {
        all += num * 1.0 / (n - 2);
    }
    
    cout << fixed << setprecision(2);
    cout << all << endl;

    return 0;
}