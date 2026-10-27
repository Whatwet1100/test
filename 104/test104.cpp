#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m, min;
    cin >> n >> m;
    vector<int> all;

    for(int i = 0; i < m; i ++)
    {
        int temp;
        cin >> temp;
        all.push_back(temp);
    }
    int res = 0, siz = all.size();
    for(int i = siz - 1; i >= siz - m; i--)
    {
        res += all[i];
    }
    min = res;

    for(int i = m; i < n; i ++)
    {
        int temp;
        cin >> temp;
        all.push_back(temp);
        int res = 0,siz = all.size();
        for(int i = siz - 1; i >= siz - m; i--)
        {
            res += all[i];
        }
        if(res < min)
        {
            min = res;
        }
    }
    cout << min << endl;


    return 0;
}