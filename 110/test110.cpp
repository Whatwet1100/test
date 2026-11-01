#include <iostream>
#include <vector>
using namespace std;

vector<vector<bool>> torchf(vector<vector<bool>> inp, int x, int y, int n)
{
    vector<vector<bool>> temp = inp;

    for(int i = -1; i <= 1; i += 2 )
    {
        if(x + 2 * i >= 0 && x + 2 * i <= n - 1)
        {
            temp[x + 2 * i][y] = 1;

        }
    }

    for(int t = -1; t <= 1; t += 2)
    {
        if(y + 2 * t >= 0 && y + 2 * t <= n - 1)
        {
            temp[x][y + 2 * t] = 1;

        }
    }

    for(int i = -1; i <= 1; i++)
    {
        for(int t = -1; t <= 1; t++)
        {
            if(x + i >= 0 && y + t >= 0 && x + i <= n - 1 && y + t <= n - 1)
            {
                temp[x + i][y + t] = 1;

            }
        }
    }

    return temp;
}

vector<vector<bool>> glowf(vector<vector<bool>> inp, int x, int y, int n)
{
    vector<vector<bool>> temp = inp;

    for(int i = -2; i <= 2; i++)
    {
        for(int t = -2; t <= 2; t++)
        {
            if(x + i >= 0 && y + t >= 0 && x + i <= n - 1 && y + t <= n - 1)
            {
                temp[x + i][y + t] = 1;
            }
        }
    }

    return temp;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<bool>> mc(n, vector<bool>(n, 0));


    for(int i = 0; i < m; i++)
    {
        
        int tx, ty;
        cin >> tx >> ty;
        mc = torchf(mc, tx - 1, ty - 1, n);

    }

    for(int i = 0; i < k; i++)
    {
        int tx, ty;
        cin >> tx >> ty;
        mc = glowf(mc, tx - 1, ty - 1, n);
        
    }

    int cnt = 0;
    for(int i = 0; i < n; i ++)
    {
        for(int t = 0; t < n; t ++)
        {
            if(mc[i][t] == 0) cnt ++;
        }

    }


    cout << cnt << endl;


    return 0;
}