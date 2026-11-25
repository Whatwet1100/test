#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>
using namespace std;

int main()
{   
    vector<int> a, b, res;
    int n, s, e;
    cin >> n >> s >> e;;    

    for(int i = 0; i < n; i ++) 
    {
    a.push_back( i * 100 + (int)(sin(n + i) * 100));
    b.push_back( i * 100 + (int)(cos(n + i) * 100));
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    merge(a.begin(),a.end(),b.begin(),b.end(),back_inserter(res));

    for(int i = s; i < e; i++)
    {
        cout << res[i] << " ";
    }



    return 0;
}