#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> all, resall;

    for(int i = 0; i < n; i ++)
    {
        int temp;
        cin >> temp;
        all.push_back(temp);
    }

    for(int i = 0; i < n; i ++)
    {
        for(int t = i + 1; t < n; t ++)
        {
            resall.push_back(all[i] + all[t]);
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i ++)
    {
        bool ok = false;
        for(int t = 0; t < resall.size(); t ++)
        {
            if(ok == false && all[i] == resall[t])
            {
                cnt ++;
                ok = true;
            }
        }
    }
    cout << cnt << endl;


    return 0;
}