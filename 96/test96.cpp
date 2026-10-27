#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int w, x, h, n;
    cin >> w >> x >> h >> n;

    vector<vector<vector<bool>>> vis(w+1, vector<vector<bool>>(x+1, vector<bool>(h+1, true)));


    for(int i = 0; i < n; i ++)
    {
        int a[6];
        for(int t = 0; t < 6; t++)
        {
            cin >> a[t];
        }

        for(int tx = a[0]; tx <= a[3]; tx++)
        {
            for(int ty = a[1]; ty <= a[4]; ty++)
            {
                for(int tz = a[2]; tz <= a[5]; tz++)
                {
                    vis[tx][ty][tz] = false;
                }
            }
        }
    }   

    int cnt = 0;
    for(int tx = 1; tx <= w; tx++)
    {
       for(int ty = 1; ty <= x; ty++)
        {
            for(int tz = 1; tz <= h; tz++)
            {
                if(vis[tx][ty][tz]) cnt++;
            }
        }
    }

    cout << cnt;


    return 0;
}