#include <iostream>
#include <vector>
#include <utility>
using namespace std;

// pair(f,s) f为行，s为列，原点(0,0).

pair<int, int> exc(int n, pair<int, int> lst, vector<vector<int>> acc)
{
    if(lst.first == 0 && lst.second != n - 1)
    {
        auto res = make_pair(n - 1, lst.second + 1);
        return res;
    }
    else if(lst.second == n - 1 && lst.first != 0)
    {
        auto res = make_pair(lst.first - 1, 0);
        return res;
    }
    else if(lst.first == 0 && lst.second == n - 1)
    {
        auto res = make_pair(1, n - 1);
        return res;
    }
    else
    {
        if (acc[lst.first - 1][lst.second + 1] == 0)
        {
            auto res = make_pair(lst.first - 1, lst.second + 1);
            return res;
        }
        else
        {
            auto res = make_pair(lst.first + 1, lst.second);
            return res;
        }
    }


}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> squ(n, vector<int>(n, 0));

    squ[0][n / 2] = 1;

    auto lst = make_pair(0, n/2);


    for(int i = 2; i <= n * n; i++)
    {
        lst = exc(n, lst, squ);
        squ[lst.first][lst.second] = i;

    }

    for(int i = 0; i < n; i++)
    {
        for(int t = 0; t < n; t++)
        {
            cout << squ[i][t] << " ";
        }
        cout << endl;
    }

    
    return 0;
}