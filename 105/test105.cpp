#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> cnt;
    for(int i = 0; i <= a + b + c; i++)
    {
        cnt.push_back(0);
    }

    for(int i = 1; i <= a; i++)
    {
        for(int t = 1; t <= b; t++)
        {
            for(int n = 1; n <= c; n++)
            {
                cnt[i + t + n] ++;
            }
        }
    }

    int maxnum, maxpla;
    maxnum = cnt[1];
    maxpla = 1;

    for(int i = 2; i <= a + b + c; i++)
    {
        if(cnt[i] > maxnum)
        {
            maxnum = cnt[i];
            maxpla = i;
        }
    }

    cout << maxpla << endl;


    return 0;
}