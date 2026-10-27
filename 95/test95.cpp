#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> all;
    for(int i = 0; i < n; i++)
    {
        int a[4];
        vector<int> temp;
        cin >> a[0] >> a[1] >> a[2];
        a[3] = a[0] + a[1] + a[2];

        for(int i = 0; i < 4; i++)
        {
            temp.push_back(a[i]);
        }
        all.push_back(temp);        
    }

    int ok = 0;

    for(int i = 0; i < n; i++)
    {
        for(int t = i + 1; t < n; t++)
        {
            if(abs(all[i][3] - all[t][3]) <= 10)
            {
                if(abs(all[i][0] - all[t][0]) <= 5 && abs(all[i][1] - all[t][1]) <= 5 &&abs(all[i][2] - all[t][2]) <= 5)
                {
                    ok++;
                }
            }
        }
    }

    cout << ok;

    return 0;
}