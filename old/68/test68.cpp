#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), d(n), b(n);
    std::vector<std::vector<int>> raw;
    vector<int> final;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i] >> d[i] >> b[i];
        vector<int> temp(m);
        fill(temp.begin(), temp.begin() + d[i], a[i]);
        fill(temp.begin() + d[i], temp.end(), b[i]);
        raw.push_back(temp);
    }

    for(int nb = 0; nb < m; nb++)
    {
        vector<int> temp2;
        transform(raw.begin(), raw.end(), back_inserter(temp2),
            [nb](const vector<int>& row)
            {
                return row[nb];
            });
        sort(temp2.begin(), temp2.end());
        auto last = unique(temp2.begin(), temp2.end()); 
        int temp3 = last - temp2.begin();
        final.push_back(temp3);
    }

    for(int x : final)
    {
        cout << x << endl;
    }

    return 0;
}
//放弃了。。。

