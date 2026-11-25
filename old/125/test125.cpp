#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a;


    for(int i = 0; i < n; i ++) a.push_back((int)(sin(n + i) * 1000000));



    for(int i = 0; i < m; i++)
    {
        int t1, t2, t3, t4;
        cin >> t1 >> t2 >> t3 >> t4;
        int len = a.size();
        if (t1 < t2 && t1 < len)
        {
            int real_t2 = min(t2, len);
            a.erase(a.begin() + t1, a.begin() + real_t2);
        }

        int curlen = a.size();

        int L = t3;
        int R = min(t4, curlen);
        if (L >= R)
        {
            cout << "null\n";
        }
        else
        {
            for(int t = L; t < R; t++)
            {
                if(t != L) cout << ' ';
                cout << a[t];
            }
            cout << '\n';
        }

    }


    return 0;
}
