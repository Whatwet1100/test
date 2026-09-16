#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> d;
    int uh = 0;

    for(int i = 0; i < 7; i++)
    {
        int a, b, temp;
        cin >> a >> b;
        temp = a + b;
        d.push_back(temp);
        if(temp > 8)
        {
            uh = uh + 1;
        }
    }

    if (uh == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        int max = *max_element(d.begin(), d.end());
        int day;
        for(int n = 0; n < 7; n++)
        {
            if (max == d[n])
            {
                day = n + 1;
                cout << day << endl;
                return 0;
            }
        }
    }
    
    return 0;
}