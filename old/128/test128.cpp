#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int l = 0; l < t; l++)
    {
        int n, m;
        cin >> n >> m;
        vector<int> lug;

        for(int i = 0; i < m; i++)
        {
            int temp;
            cin >> temp;

            lug.push_back(temp);
        }
        sort(lug.begin(), lug.end());

        int all = 0, cnt = 0;

        for(int i = 0; i < m; i ++)
        {
            if(all + lug[i] <= n)
            {
                all += lug[i];
                cnt ++;
            }
        }



        cout << cnt << endl;

    }

    return 0;
}