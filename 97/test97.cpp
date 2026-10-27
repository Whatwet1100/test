#include <iostream>
#include <vector>
using namespace std;

bool ana(vector<int> a, int b)
{
    bool res = false;
    for(auto n : a)
    {
        if (n == b)
        {
            res = true;
            break;
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int res[8] = {0};
    vector<int> pri;
    for(int i = 0; i < 7; i++)
    {
        int temp;
        cin >> temp;
        pri.push_back(temp);
    }

    for(int i = 0; i < n; i++)
    {
        int cnt = 0;
        for(int t = 0; t < 7; t++)
        {
            int temp;
            cin >> temp;
            if (ana(pri, temp)) cnt++;

        }
        res[cnt] ++;
    }

    for(int i = 7; i > 0; i--)
    {
        cout << res[i] << " ";
    }

    return 0;
}