#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> mp;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        double a;
        int b;

        cin >> a >> b;
        for(int m = 1; m <= b; m++)
        {
            int temp = int(a * m);
            if(mp.count(temp))
            {
                mp.erase(temp);
            }
            else
            {
                mp[temp] = 1;
            }
        }
    }

    int res = 0, l = 0;

    do
    {
        l += 1;
        if(mp.count(l))
        {
            res = l;
        }
    }
    while (res == 0);

    cout << res << endl;

    return 0;
}