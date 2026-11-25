#include <iostream>
#include <algorithm>
using namespace std;

struct timeline
{
    int s, t;
                                                                                                                                            
}a[10005];

bool cmp(timeline x, timeline y) {return x.t < y.t;};


int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i ++)
    {
        int s, t;
        cin >> s >> t;
        a[i].s = s;
        a[i].t = t;
    }
    sort(a, a + n, cmp);

    int end = a[0].t, cnt = 1;

    for(int i = 1; i < n; i ++)
    {
        if(a[i].s >= end)
        {
            end = a[i].t;
            cnt ++;
        }
    }

    cout << cnt << endl;

    return 0;
}