#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct dtr
{
    int ti, di;
};

bool cmp(dtr x, dtr y){return x.di < y.di;};

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i ++)
    {
        int n, now = 0, end = 0, cnt = 0;
        cin >> n;

        vector<dtr> a(n);
        vector<int> ex;

        for(int l = 0; l < n; l++)
        {
            cin >> a[l].ti >> a[l]. di; 
        }
        sort(a.begin(), a.end(), cmp);

        for(int l = 0; l < n; l ++)
        {
            end = a[l].di;
            now += a[l].ti;
            if(now > end)
            {
                ex.push_back(now - end);
                cnt = 1;
            }
        }
        int minnum;
        if(cnt == 1)
        {
            auto it = max_element(ex.begin(), ex.end());
            minnum = *it;
        }
        else
        {
            minnum = 0;
        }
        cout << minnum << endl;
        
    }
    return 0;
}