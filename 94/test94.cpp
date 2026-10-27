#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<bool> all;

    int l, m;
    cin >> l >> m;

    for(int i = 0; i <= l; i++)
    {
        all.push_back(1);
    }

    for(int i = 0; i < m; i++)
    {
        int st, ed;
        cin >> st >> ed;
        for(int i = st; i <= ed; i++)
        {
            all[i] = false;
        }

    }

    int count = 0;
    for(auto n : all)
    {
        if (n) count++;
    }

    cout << count;

    return 0;
}